#include <sstream>
#include <stdexcept>

#include "Reader.h"
#include "Parser.hxx"
#include "Lexer.h"

namespace acentric_lang {

	void Reader::doInteractive(bool debug, std::ostream& err, std::ostream& out, std::istream& in) {
		acentric_lang::ParseResult result;
		result.interactive = true;
		acentric_lang::Lexer lexer(in, out);
		acentric_lang::Parser parser(&lexer, &result);

		if (debug) {
			parser.set_debug_stream(err);
			parser.set_debug_level(1);
		}

		out << "Welcome to Acentric\n> ";

		while (true) {
			try {
				parser.parse();
			}
			catch (const std::invalid_argument& e) {
				out << e.what() << std::endl;
				continue;
			}
			catch (const Parser::syntax_error& e) {
				if (debug) {
					err << e.what() << std::endl;
				}
				else {
					out << "Syntax error";
				}
				continue;
			}
			catch (std::exception e) {
				err << "Something went REALLY wrong, and it gave me this error message, \
						and I (the lowly Reader class) don't really know what it means, \
						but maybe you or some other smart person can figure it out: " << e.what() << std::endl;
			}
		}
	}

	acentric_lang::ParseResult Reader::parse(const std::string& expr) {
		acentric_lang::ParseResult result;
		std::istringstream in(expr);
		acentric_lang::Lexer lexer(in);
		acentric_lang::Parser parser(&lexer, &result);
		parser.parse(); // TODO error check
		return result;
	}

	acentric_core::Note Reader::readNote(const std::string& expr) {
		return Reader::parse(expr).noteResult; // TODO find a way to warn if input type doesn't match what's being returned
	}

}
