#include <valius/split.h>

namespace valius
{
	std::vector<std::string> split(std::string i_str, char c)
	{
		return split(i_str, std::to_string(c);
	}
	
	std::vector<std::string> split(std::string i_str, std::string i_delim)
	{
		std::vector<std::string> result;

		size_t found = i_str.find(i_delim);
		size_t startIndex = 0;

		while (found != string::npos)
		{
			std::string temp(i_str.begin() + startIndex, i_str.begin() + found);
			result.push_back(temp);
			startIndex = found + i_delim.size();
			found = i_str.find(i_delim, startIndex);
		}
		if (startIndex != i_str.size())
			result.push_back(string(i_str.begin() + startIndex, i_str.end()));
		return result;      
	}
	
	std::vector<std::string> split(std::string s, std::regex r)
	{
		std::vector<std::string> elems;
		std::sregex_token_iterator iter(s.begin(), s.end(), r, -1);
		std::sregex_token_iterator end;

		while (iter != end)  {
			elems.push_back(*iter);
			++iter;
		}

		return elems;
	}
}