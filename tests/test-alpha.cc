#include <iostream>
#include <valius/alpha.h>

int main(int argc, char* argv[])
{
	using namespace valius::alpha;
	if (argc == 1)
		std::cout << "Usage: " + std::string(argv[0]) + " <some text>" << std::endl;
	else
		for (size_t i = 0; i < argc; i += 1)
		{
			std::cout << "case " << i << ": " << argv[i] << (isAlpha(argv[i]) ? " is " : "is not ") << "alpha" << "\n";
		}
	return 0;
}
