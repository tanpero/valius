#include <valius/isBase32.h>

namespace valius
{
	bool isBase32(std::string s)
	{
		std::regex regex(R"(^[A-Z2-7]+=*$)", std::regex_constants::ECMAScript);
		size_t size = s.size();
		return size > 0 && size % 8 == 0 && std::regex_match(s, regex);
	}
}
