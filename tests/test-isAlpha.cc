#include <iostream>
#include <valius/alpha.h>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isAlpha(argv[1]) ? "\" is " : "\" is not ") << "alpha" << "\n";
	else if (argc == 3)
		try
		{
			std::cout << '"' << argv[1] << (isAlpha(argv[1], argv[2]) ? "\" is " : "\" is not ") << "alpha" << "\n";
		}
		catch (const std::exception&)
		{
			std::cout << "\"" << argv[2] << "\" is not a supported locale type.\n";
		}
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text> <language>" << "\n";
	return 0;
}
