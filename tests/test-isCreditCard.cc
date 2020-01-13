#include <iostream>
#include <valius/isCreditCard.h>

int main(int argc, char* argv[])
{
	using namespace valius;
	if (argc == 2)
		std::cout << '"' << argv[1] << (isCreditCard(argv[1]) ? "\" is " : "\" is not ") << "credit card" << "\n";
	else
		std::cout << "Usage: " + std::string(argv[0]) + " <text>" << "\n";
	return 0;
}
