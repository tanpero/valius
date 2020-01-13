#ifndef _VALIUS_ENCODEURI_H_
#define _VALIUS_ENCODEURI_H_

#include <string>
#include <regex>
#include <vector>

namespace valius
{
    void hexchar(unsigned char c, unsigned char &hex1, unsigned char &hex2);	
    std::string encodeURI(std::string s);
}

#endif // !_VALIUS_ENCODEURI_H_
