#include "Note.h"
#include "BasicNote.h"

Note::Note(BasicNote base, int offset, int octave)
{
	this->base = base;
	this->offset = offset;
	this->octave = octave;
}

int Note::getAbsoluteDistance() const
{
	int distance{ 0 };
	distance += octave * 12;
	distance += offset;

	switch (base) {
	case BasicNote::A:
		break; // no need to add anything
	case BasicNote::B:
		distance += 2;
		break;
	case BasicNote::C:
		distance += 3;
		break;
	case BasicNote::D:
		distance += 5;
		break;
	case BasicNote::E:
		distance += 7;
		break;
	case BasicNote::F:
		distance += 8;
		break;
	case BasicNote::G:
		distance += 10;
		break;
	}
	return distance;
}

int Note::getBasicDistance(const Note &other) const
{
	int thisBase = static_cast<int>(base);
	int otherBase = static_cast<int>(other.getBase());
	int thisOctave = octave;
	int otherOctave = other.getOctave();

	int lowBase;
	int lowOctave;
	int highBase;
	int highOctave;

	if ((thisOctave < otherOctave) || 
		(thisOctave == otherOctave && thisBase < otherBase)) {
		// This name/octave is lower
		lowBase = thisBase;
		lowOctave = thisOctave;
		highBase = otherBase;
		highOctave = otherOctave;
	}
	else if (thisOctave == otherOctave && thisBase == otherBase) {
		// Both names/octaves are the same
		return 0;
	} else if ((thisOctave == otherOctave && thisBase > otherBase) ||
		(thisOctave > otherOctave)) {
		// This name/octave is higher
		lowBase = otherBase;
		lowOctave = otherOctave;
		highBase = thisBase;
		highOctave = thisOctave;
	}

	return ((highOctave - lowOctave) * 7) + (highBase - lowBase);
}

int Note::getSemitoneDistance(const Note &other) const
{
	int thisDistance{ getAbsoluteDistance() };
	int otherDistance{ other.getAbsoluteDistance() };
	
	if (thisDistance > otherDistance)
		return thisDistance - otherDistance;
	else
		return otherDistance - thisDistance;
}

Note Note::getOtherNote(const Interval &interval, bool getLowerNote) const
{
	int otherOctave{ octave };
	int otherBase{ static_cast<int>(base) };
	int otherOffset{ offset };

	if (!getLowerNote) {
		otherOctave += (interval.getBasicDistance() / 7);
		otherBase += (interval.getBasicDistance() % 7);

		otherOctave += otherBase / 7;
		otherBase %= 7;
	}
	else {
		otherOctave -= (interval.getBasicDistance() / 7);
		otherBase -= (interval.getBasicDistance() % 7);
		if (otherBase < 0) {
			otherBase += 7;
			otherOctave -= 1;
		}
	}

	Note intermediate{ static_cast<BasicNote>(otherBase), 0, otherOctave };
	otherOffset = intermediate.getAbsoluteDistance() + interval.getSemitones() - getAbsoluteDistance();

	return Note(static_cast<BasicNote>(otherBase), otherOffset, otherOctave); // TODO test, test, test!
}

Interval Note::getInterval(const Note & other) const
{
	int basicDistance = getBasicDistance(other);
	int semitones = getSemitoneDistance(other);
	return Interval(basicDistance, semitones);
}

std::ostream& operator<<(std::ostream &os, const Note &note)
{
	// Print base note
	switch (note.getBase()) {
	case BasicNote::A:
		os << "A";
		break;
	case BasicNote::B:
		os << "B";
		break;
	case BasicNote::C:
		os << "C";
		break;
	case BasicNote::D:
		os << "D";
		break;
	case BasicNote::E:
		os << "E";
		break;
	case BasicNote::F:
		os << "F";
		break;
	case BasicNote::G:
		os << "G";
		break;
	}

	// Print sharps or flats
	if (note.getOffset() < -2) {
		os << "(b^" << note.getOffset() << ")";
	}
	else if (note.getOffset() == -2)
		os << "bb";
	else if (note.getOffset() == -1)
		os << "b";
	else if (note.getOffset() == 1)
		os << "#";
	else if (note.getOffset() == 2)
		os << "##";
	else if (note.getOffset() > 2) {
		os << "(#^" << note.getOffset() << ")";
	}

	// Print octave
	os << note.getOctave();

	return os;
}
