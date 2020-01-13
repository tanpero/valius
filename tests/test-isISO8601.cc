#include <valius/isISO8601.h>
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isISO8601(argv[1]) ? "" is " : "" is not ") << "ISO8601" << "
";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "
";
	return 0;
}
