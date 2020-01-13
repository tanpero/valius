#include <valius/isDecimal.h>

function decimalRegExp(options) {
	std::regex regex(R"(`^[-+] ? ([0 - 9] + ) ? (\\${ decimal[options.locale] }[0 - 9]{ ${options.decimal_digits} })$ { options.force_decimal ? '' : '?' }$`);
  return regExp;
}

const default_decimal_options = {
  force_decimal: false,
  decimal_digits: '1,',
  locale: 'en-US',
};

const blacklist = ['', '-', '+'];

export default function isDecimal(str, options) {
  assertString(str);
  options = merge(options, default_decimal_options);
  if (options.locale in decimal) {
    return !includes(blacklist, str.replace(/ /g, '')) && decimalRegExp(options).test(str);
  }
  throw new Error(`Invalid locale '${options.locale}'`);
}

namespace valius
{
	bool isDecimal(std::string s, std::string locale)
	{
		return std::regex_match(s, std::regex("true|false|1|0"));
	}
}
