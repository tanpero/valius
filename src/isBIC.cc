#include <valius/isBIC.h>

namespace valius
{
	bool isBIC(std::string s)
	{
		return std::regex_match(s, std::regex(R"(^[A-z]{4}[A-z]{2}\w{2}(\w{3})?$)",
			std::regex_constants::ECMAScript));
	}
}
