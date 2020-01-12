#include <iostream>
#include <valius/isBase64.h>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isBase64(argv[1]) ? "\" is " : "\" is not ") << "Base64" << "\n";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "\n";
	return 0;
}
