#include <string>
#include <map>
#include <regex>
#include <vector>
#include <valius/alpha.h>

namespace valius
{
    bool isAlpha(std::string s, std::string env)
    {
        std::string pattern;
        auto table = alphaTable();
        try
        {
            pattern = table.at(env);
        }
        catch (std::exception&)
        {
            throw std::exception("Unsupported locale type");
        }
        std::regex regex(pattern, std::regex_constants::ECMAScript | std::regex_constants::icase);
        return std::regex_match(s, regex);
    }
	
	bool isAlphanumeric(std::string s, std::string env)
    {
        std::string pattern;
        auto table = alphanumericTable();
        try
        {
            pattern = table.at(env);
        }
        catch (std::exception&)
        {
            throw std::exception("Unsupported locale type");
        }
        std::regex regex(pattern, std::regex_constants::ECMAScript | std::regex_constants::icase);
        return std::regex_match(s, regex);
    }
}