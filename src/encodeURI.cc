#include <valius/encodeURI.h>

namespace valius
{
    void hexchar(unsigned char c, unsigned char &hex1, unsigned char &hex2)
	{
		const char *str = s.c_str();
		std::vector<char> v(s.size());
		v.clear();
		for (size_t i = 0, l = s.size(); i < l; i++)
		{
			char c = str[i];
			if ((c >= '0' && c <= '9') ||
				(c >= 'a' && c <= 'z') ||
				(c >= 'A' && c <= 'Z') ||
				c == '-' || c == '_' || c == '.' || c == '!' || c == '~' ||
				c == '*' || c == '\'' || c == '(' || c == ')')
			{
				v.push_back(c);
			}
			else if (c == ' ')
			{
				v.push_back('+');
			}
			else
			{
				v.push_back('%');
				unsigned char d1, d2;
				hexchar(c, d1, d2);
				v.push_back(d1);
				v.push_back(d2);
			}
		}

		return std::string(v.cbegin(), v.cend());
	}
}
