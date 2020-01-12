#include <iostream>
#include <valius/isBIC.h>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isBIC(argv[1]) ? "\" is " : "\" is not ") << "BIC" << "\n";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "\n";
	return 0;
}
