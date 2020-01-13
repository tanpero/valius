#include <valius/isISO3166Alpha2.h>
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isISO3166Alpha2(argv[1]) ? "" is " : "" is not ") << "ISO3166Alpha2" << "
";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "
";
	return 0;
}
