// Scale.h
#ifndef SCALE_H
#define SCALE_H

#include <vector>
#include "Note.h"
#include "Interval.h"

class Scale {

private:
	Note base;
	std::vector<Interval> degrees;

public:
	Scale(Note base, std::vector<Interval> degrees);
	Scale(Note base, std::vector<Note> degrees); // ignore octave designation
	std::vector<Note> getDegrees() const;
	bool isDiatonic() const;
	bool isInScale(Note &note) const;
	Note simplify(Note &note) const;

};

#endif //SCALE_H