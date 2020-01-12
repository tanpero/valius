#include <valius/isBoolean.h>

namespace valius
{
	bool isBoolean(std::string s)
	{
		return std::regex_match(s, std::regex("true|false|1|0"));
	}
}
