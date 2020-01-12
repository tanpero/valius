#include <iostream>
#include <valius/isASCII.h>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isASCII(argv[1]) ? "\" is " : "\" is not ") << "ASCII" << "\n";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "\n";
	return 0;
}
