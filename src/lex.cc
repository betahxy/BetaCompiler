#include <iostream>
#include <lex.h>

using namespace Betahxy;

Lex::Lex(const char *file_name) {
	file_name = file_name;
	file.open(file_name, std::ios::in);

	if (!file.is_open()) {
		std::cout << "File cannot be opened!\n";
		exit(-1);
	}

	char buff=0;
	while ((buff = file.get()) != EOF) {
		std::cout << buff;
	}
	std::cout << file_name <<std::endl;
}
