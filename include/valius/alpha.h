#include <string>
#include <map>
#include <regex>
#include <vector>

namespace valius
{
namespace alpha
{
	std::map<std::string, std::string> alphaTable();
	std::map<std::string, std::string> alphanumericTable();
	std::map<std::string, std::string> decimalTable();
	bool isAlpha(std::string s, std::string env = "en-US");
}
}
	