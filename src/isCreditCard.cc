#include <valius/isCreditCard.h>
#include <cctype>

static inline int parseInt(std::string s)
{
	if (s.empty())
	{
		throw std::exception("Invalid integer number");
	}

	bool negate = (s.at(0) == '-');
	int result = 0;
	for (std::string::iterator i = s.begin(); i != s.end(); ++i)
	{
		if (std::isdigit(*i))
		{
			result = result * 10 - (*i - '0');
		}
		else
		{
			break;
		}
	}
	return negate ? result : -result;
}

namespace valius
{
	std::regex creditCard(R"(^(?:4[0-9]{12}(?:[0-9]{3})?|5[1-5][0-9]{14}|(222[1-9]|22[3-9][0-9]|2[3-6][0-9]{2}|27[01][0-9]|2720)[0-9]{12}|6(?:011|5[0-9][0-9])[0-9]{12}|3[47][0-9]{13}|3(?:0[0-5]|[68][0-9])[0-9]{11}|(?:2131|1800|35\d{3})\d{11}|6[27][0-9]{14})$)", std::regex_constants::ECMAScript);

	bool isCreditCard(std::string s)
	{
		std::string sanitized = std::regex_replace(s, std::regex("[- ]+/", std::regex_constants::extended), "");
		if (!std::regex_match(sanitized, creditCard))
		{
			return false;
		}
		int sum = 0;
		bool shouldDouble = false;
		for (size_t i = sanitized.size() - 1; i >= 0; i -= 1)
		{
			std::string digit = sanitized.substr(i, (i + 1));
			int tempNum = parseInt(digit);
			if (shouldDouble)
			{
				tempNum *= 2;
				if (tempNum >= 10)
				{
					sum += ((tempNum % 10) + 1);
				}
				else
				{
					sum += tempNum;
				}
			}
			else
			{
				sum += tempNum;
			}
			shouldDouble = !shouldDouble;
		}
		return ((sum % 10) == 0 ? sanitized.size() : false);			
	}
}