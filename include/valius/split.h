#ifndef _VALIUS_SPLIT_H_
#define _VALIUS_SPLIT_H_

namespace valius
{
	std::vector<std::string> split(std::string s, char d = ' ');
	std::vector<std::string> split(std::string s, std::string d);
	std::vector<std::string> split(std::string s, std::regex r);
}

#endif // !_VALIUS_SPLIT_H_