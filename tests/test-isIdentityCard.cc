#include <valius/isIdentityCard.h>
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isIdentityCard(argv[1]) ? "" is " : "" is not ") << "IdentityCard" << "
";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "
";
	return 0;
}
