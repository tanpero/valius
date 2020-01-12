#include <iostream>
#include <valius/isBase32.h>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isBase32(argv[1]) ? "\" is " : "\" is not ") << "alpha" << "\n";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "\n";
	return 0;
}
