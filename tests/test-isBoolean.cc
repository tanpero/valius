#include <iostream>
#include <valius/isBoolean.h>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isBoolean(argv[1]) ? "\" is " : "\" is not ") << "Boolean" << "\n";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "\n";
	return 0;
}
