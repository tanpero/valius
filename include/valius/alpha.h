#ifndef _VALIUS_ALPHA_H_
#define _VALIUS_ALPHA_H_

#include <string>
#include <vector>
#include <map>
#include <regex>

namespace valius
{
	std::vector<std::string> englishLocalesTable();	
	std::vector<std::string> arabicLocalesTable();
	std::vector<std::string> dotDecimalTable();
	std::vector<std::string> commaDecimalTable();
	
    std::map<std::string, std::string> alphaTable();
    std::map<std::string, std::string> alphanumericTable();
    std::map<std::string, std::string> decimalTable();
}


#endif // !_VALIUS_ALPHA_H_
