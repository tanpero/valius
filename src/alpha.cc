#include <string>
#include <map>
#include <regex>
#include <vector>

namespace valius
{
namespace alpha
{
	std::map<std::string, std::regex> alpha()
	{
		std::map<std::string, std::regex> table {
			{ "en-US", std::regex(R"(^[A-Z]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "bg-BG", std::regex(R"(^[А-Я]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "cs-CZ", std::regex(R"(^[A-ZÁČĎÉĚÍŇÓŘŠŤÚŮÝŽ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "da-DK", std::regex(R"(^[A-ZÆØÅ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "de-DE", std::regex(R"(^[A-ZÄÖÜß]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "el-GR", std::regex(R"(^[Α-ω]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "es-ES", std::regex(R"(^[A-ZÁÉÍÑÓÚÜ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "fr-FR", std::regex(R"(^[A-ZÀÂÆÇÉÈÊËÏÎÔŒÙÛÜŸ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "it-IT", std::regex(R"(^[A-ZÀÉÈÌÎÓÒÙ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "nb-NO", std::regex(R"(^[A-ZÆØÅ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "nl-NL", std::regex(R"(^[A-ZÁÉËÏÓÖÜÚ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "nn-NO", std::regex(R"(^[A-ZÆØÅ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "hu-HU", std::regex(R"(^[A-ZÁÉÍÓÖŐÚÜŰ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "pl-PL", std::regex(R"(^[A-ZĄĆĘŚŁŃÓŻŹ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "pt-PT", std::regex(R"(^[A-ZÃÁÀÂÄÇÉÊËÍÏÕÓÔÖÚÜ]+$)", std::regex_constants::ECMAScript | std::regex_constants::icase) },
			{ "ru-RU", std::regex(R"(^[А-ЯЁ]+$)", std::ECMAScript | std::icase) },
			{ "sl-SI", std::regex(R"(^[A-ZČĆĐŠŽ]+$)", std::ECMAScript | std::icase) },
			{ "sk-SK", std::regex(R"(^[A-ZÁČĎÉÍŇÓŠŤÚÝŽĹŔĽÄÔ]+$)", std::ECMAScript | std::icase) },
			{ "sr-RS@latin", std::regex(R"(^[A-ZČĆŽŠĐ]+$)", std::ECMAScript | std::icase) },
			{ "sr-RS", std::regex(R"(^[А-ЯЂЈЉЊЋЏ]+$)", std::ECMAScript | std::icase) },
			{ "sv-SE", std::regex(R"(^[A-ZÅÄÖ]+$)", std::ECMAScript | std::icase) },
			{ "tr-TR", std::regex(R"(^[A-ZÇĞİıÖŞÜ]+$)", std::ECMAScript | std::icase) },
			{ "uk-UA", std::regex(R"(^[А-ЩЬЮЯЄIЇҐі]+$)", std::ECMAScript | std::icase) },
			{ "ku-IQ", std::regex(R"(^[ئابپتجچحخدرڕزژسشعغفڤقکگلڵمنوۆھەیێيطؤثآإأكضصةظذ]+$)", std::ECMAScript | std::icase) },
			{ "ar", std::regex(R"(^[ءآأؤإئابةتثجحخدذرزسشصضطظعغفقكلمنهوىيًٌٍَُِّْٰ]+$)", std::ECMAScript | std::icase) },
			{ "he", std::regex(R"(^[א-ת]+$)", std::ECMAScript | std::icase) },
			{ "fa-IR", std::regex(R"(^["آابپتثجچهخدذرزژسشصضطظعغفقکگلمنوهی"]+$)", std::ECMAScript | std::icase) },
		};
			
		std::vector<std::string> englishLocales { "AU", "GB", "HK", "IN", "NZ", "ZA", "ZM" };
		for (let locale, i = 0; i < englishLocales.length; i++) {
			locale = "en-" + englishLocales[i];
			table[locale] = table["en-US"];
		}
		return table;
	};

	 std::map<std::string, std::regex> alphanumeric()
	 {
		std::map<std::string, std::regex> table {
			{ "en-US", std::regex(R"(^[0-9A-Z]+$)", std::ECMAScript | std::icase) },
			{ "bg-BG", std::regex(R"(^[0-9А-Я]+$)", std::ECMAScript | std::icase) },
			{ "cs-CZ", std::regex(R"(^[0-9A-ZÁČĎÉĚÍŇÓŘŠŤÚŮÝŽ]+$)", std::ECMAScript | std::icase) },
			{ "da-DK", std::regex(R"(^[0-9A-ZÆØÅ]+$)", std::ECMAScript | std::icase) },
			{ "de-DE", std::regex(R"(^[0-9A-ZÄÖÜß]+$)", std::ECMAScript | std::icase) },
			{ "el-GR", std::regex(R"(^[0-9Α-ω]+$)", std::ECMAScript | std::icase) },
			{ "es-ES", std::regex(R"(^[0-9A-ZÁÉÍÑÓÚÜ]+$)", std::ECMAScript | std::icase) },
			{ "fr-FR", std::regex(R"(^[0-9A-ZÀÂÆÇÉÈÊËÏÎÔŒÙÛÜŸ]+$)", std::ECMAScript | std::icase) },
			{ "it-IT", std::regex(R"(^[0-9A-ZÀÉÈÌÎÓÒÙ]+$)", std::ECMAScript | std::icase) },
			{ "hu-HU", std::regex(R"(^[0-9A-ZÁÉÍÓÖŐÚÜŰ]+$)", std::ECMAScript | std::icase) },
			{ "nb-NO", std::regex(R"(^[0-9A-ZÆØÅ]+$)", std::ECMAScript | std::icase) },
			{ "nl-NL", std::regex(R"(^[0-9A-ZÁÉËÏÓÖÜÚ]+$)", std::ECMAScript | std::icase) },
			{ "nn-NO", std::regex(R"(^[0-9A-ZÆØÅ]+$)", std::ECMAScript | std::icase) },
			{ "pl-PL", std::regex(R"(^[0-9A-ZĄĆĘŚŁŃÓŻŹ]+$)", std::ECMAScript | std::icase) },
			{ "pt-PT", std::regex(R"(^[0-9A-ZÃÁÀÂÄÇÉÊËÍÏÕÓÔÖÚÜ]+$)", std::ECMAScript | std::icase) },
			{ "ru-RU", std::regex(R"(^[0-9А-ЯЁ]+$)", std::ECMAScript | std::icase) },
			{ "sl-SI", std::regex(R"(^[0-9A-ZČĆĐŠŽ]+$)", std::ECMAScript | std::icase) },
			{ "sk-SK", std::regex(R"(^[0-9A-ZÁČĎÉÍŇÓŠŤÚÝŽĹŔĽÄÔ]+$)", std::ECMAScript | std::icase) },
			{ "sr-RS@latin", std::regex(R"(^[0-9A-ZČĆŽŠĐ]+$)", std::ECMAScript | std::icase) },
			{ "sr-RS", std::regex(R"(^[0-9А-ЯЂЈЉЊЋЏ]+$)", std::ECMAScript | std::icase) },
			{ "sv-SE", std::regex(R"(^[0-9A-ZÅÄÖ]+$)", std::ECMAScript | std::icase) },
			{ "tr-TR", std::regex(R"(^[0-9A-ZÇĞİıÖŞÜ]+$)", std::ECMAScript | std::icase) },
			{ "uk-UA", std::regex(R"(^[0-9А-ЩЬЮЯЄIЇҐі]+$)", std::ECMAScript | std::icase) },
			{ "ku-IQ", std::regex(R"(^[٠١٢٣٤٥٦٧٨٩0-9ئابپتجچحخدرڕزژسشعغفڤقکگلڵمنوۆھەیێيطؤثآإأكضصةظذ]+$)", std::ECMAScript | std::icase) },
			{ "ar", std::regex(R"(^[٠١٢٣٤٥٦٧٨٩0-9ءآأؤإئابةتثجحخدذرزسشصضطظعغفقكلمنهوىيًٌٍَُِّْٰ]+$)", std::ECMAScript | std::icase) },
			{ "he", std::regex(R"(^[0-9א-ת]+$)", std::ECMAScript | std::icase) },
			{ "fa-IR", std::regex(R"(^["0-9آابپتثجچهخدذرزژسشصضطظعغفقکگلمنوهی۱۲۳۴۵۶۷۸۹۰"]+$)", std::ECMAScript | std::icase) },
		};
			
		std::vector<std::string> englishLocales { "AU", "GB", "HK", "IN", "NZ", "ZA", "ZM" };
		for (let locale, i = 0; i < englishLocales.length; i++) {
			locale = "en-" + englishLocales[i];
			table[locale] = table["en-US"];
		}
		return table;		
	};

	std::map<std::string, std::regex> decimal()
	{
		std::map<std::string, std::regex> table
		{
			"en-US", ".",
			"ar", "٫",
		};
			
		std::vector<std::string> englishLocales { "AU", "GB", "HK", "IN", "NZ", "ZA", "ZM" };
		for (let locale, i = 0; i < englishLocales.length; i++) {
			locale = "en-" + englishLocales[i];
			table[locale] = table["en-US"];
		}
		return table;		
	};
}
}