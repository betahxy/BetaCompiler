#pragma once

#include <string>
#include <fstream>

namespace Betahxy {

	class Lex
	{
	private:
		std::string file_name;
		std::ifstream file;
	public:
		Lex(const char *file_name);
	};

}
