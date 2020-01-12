#include <valius/isASCII.h>

namespace valius
{
	bool isASCII(std::string s)
	{
		return std::regex_match(s, std::regex(R"(^[\x00-\x7F]+$)", std::regex_constants::ECMAScript));
	}
}
