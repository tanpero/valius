#include <valius/isUpperCase.h>
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isUpperCase(argv[1]) ? "" is " : "" is not ") << "UpperCase" << "
";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "
";
	return 0;
}
