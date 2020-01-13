#ifndef _VALIUS_ISDECIMAL_H_
#define _VALIUS_ISDECIMAL_H_

#include <string>
#include <regex>
#include <valius/alpha.h>

namespace valius
{
	bool isDecimal(std::string s, std::string locale = "en-US");
}

#endif // !_VALIUS_ISDECIMAL_H_
