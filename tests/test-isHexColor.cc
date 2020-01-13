#include <valius/isHexColor.h>
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isHexColor(argv[1]) ? "" is " : "" is not ") << "HexColor" << "
";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "
";
	return 0;
}
