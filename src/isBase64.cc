#include <valius/isBase64.h>

std::regex notBase64(R"([^A-Z0-9+\/=])", std::regex_constants::ECMAScript | std::regex_constants::icase);

namespace valius
{
	bool isBase64(std::string s)
	{
		size_t size = s.size();
		if (size == 0 || size % 4 != 0 || std::regex_match(s, notBase64))
		{
			return false;
		}
		size_t firstPaddingChar = s.find_first_of('=');
		return firstPaddingChar == std::string::npos
			|| firstPaddingChar == size - 1
			|| (firstPaddingChar == size - 2 && s[size - 1] == '=');
	}
}
