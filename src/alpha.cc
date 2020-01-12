#include <valius/alpha.h>

namespace valius
{
	std::vector<std::string> englishLocalesTable()
	{
		return { "AU", "GB", "HK", "IN", "NZ", "ZA", "ZM" };
	}
	
	std::vector<std::string> arabicLocalesTable()
	{
		return { "AE", "BH", "DZ", "EG", "IQ", "JO", "KW", "LB", "LY",
		    "MA", "QM", "QA", "SA", "SD", "SY", "TN", "YE" };
	};
	
	std::vector<std::string> dotDecimalTable()
	{
		return { "ar-EG", "ar-LB", "ar-LY" };
	}
	
	std::vector<std::string> commaDecimalTable()
	{
		return { "bg-BG", "cs-CZ", "da-DK", "de-DE", "el-GR", "en-ZM", "es-ES", "fr-FR", "it-IT", "ku-IQ", "hu-HU", "nb-NO",
			"nn-NO", "nl-NL", "pl-PL", "pt-PT", "ru-RU", "sl-SI", "sr-RS@latin",
			"sr-RS", "sv-SE", "tr-TR", "uk-UA" };
	};
	
    std::map<std::string, std::string> alphaTable()
    {
        std::map<std::string, std::string> table {
            { "en-US", R"(^[A-Z]+$)" },
            { "bg-BG", R"(^[А-Я]+$)" },
            { "cs-CZ", R"(^[A-ZÁČĎÉĚÍŇÓŘŠŤÚŮÝŽ]+$)" },
            { "da-DK", R"(^[A-ZÆØÅ]+$)" },
            { "de-DE", R"(^[A-ZÄÖÜß]+$)" },
            { "el-GR", R"(^[Α-ω]+$)" },
            { "es-ES", R"(^[A-ZÁÉÍÑÓÚÜ]+$)" },
            { "fr-FR", R"(^[A-ZÀÂÆÇÉÈÊËÏÎÔŒÙÛÜŸ]+$)" },
            { "it-IT", R"(^[A-ZÀÉÈÌÎÓÒÙ]+$)" },
            { "nb-NO", R"(^[A-ZÆØÅ]+$)" },
            { "nl-NL", R"(^[A-ZÁÉËÏÓÖÜÚ]+$)" },
            { "nn-NO", R"(^[A-ZÆØÅ]+$)" },
            { "hu-HU", R"(^[A-ZÁÉÍÓÖŐÚÜŰ]+$)" },
            { "pl-PL", R"(^[A-ZĄĆĘŚŁŃÓŻŹ]+$)" },
            { "pt-PT", R"(^[A-ZÃÁÀÂÄÇÉÊËÍÏÕÓÔÖÚÜ]+$)" },
            { "ru-RU", R"(^[А-ЯЁ]+$)" },
            { "sl-SI", R"(^[A-ZČĆĐŠŽ]+$)" },
            { "sk-SK", R"(^[A-ZÁČĎÉÍŇÓŠŤÚÝŽĹŔĽÄÔ]+$)" },
            { "sr-RS@latin", R"(^[A-ZČĆŽŠĐ]+$)" },
            { "sr-RS", R"(^[А-ЯЂЈЉЊЋЏ]+$)" },
            { "sv-SE", R"(^[A-ZÅÄÖ]+$)" },
            { "tr-TR", R"(^[A-ZÇĞİıÖŞÜ]+$)" },
            { "uk-UA", R"(^[А-ЩЬЮЯЄIЇҐі]+$)" },
            { "ku-IQ", R"(^[ئابپتجچحخدرڕزژسشعغفڤقکگلڵمنوۆھەیێيطؤثآإأكضصةظذ]+$)" },
            { "ar", R"(^[ءآأؤإئابةتثجحخدذرزسشصضطظعغفقكلمنهوىيًٌٍَُِّْٰ]+$)" },
            { "he", R"(^[א-ת]+$)" },
            { "fa-IR", R"(^["آابپتثجچهخدذرزژسشصضطظعغفقکگلمنوهی"]+$)" },
        };
		
        std::string locale;
		std::vector<std::string> englishLocales = englishLocalesTable(),
		        arabicLocales = arabicLocalesTable();
		size_t i, size;
        for (i = 0, size = englishLocales.size(); i < size; i++) {
            locale = "en-" + englishLocales[i];
            table[locale] = table["en-US"];
        }
		for (i = 0, size = arabicLocales.size(); i < size; i++) {
            locale = "ar-" + arabicLocales[i];
            table[locale] = table["ar"];
        }
		table["pt-BR"] = table["pt-PT"];
		table["pl-Pl"] = table["pl-PL"];
        return table;
    };

    std::map<std::string, std::string> alphanumericTable()
    {
        std::map<std::string, std::string> table {
        { "en-US", R"(^[0-9A-Z]+$)" },
        { "bg-BG", R"(^[0-9А-Я]+$)" },
        { "cs-CZ", R"(^[0-9A-ZÁČĎÉĚÍŇÓŘŠŤÚŮÝŽ]+$)" },
        { "da-DK", R"(^[0-9A-ZÆØÅ]+$)" },
        { "de-DE", R"(^[0-9A-ZÄÖÜß]+$)" },
        { "el-GR", R"(^[0-9Α-ω]+$)" },
        { "es-ES", R"(^[0-9A-ZÁÉÍÑÓÚÜ]+$)" },
        { "fr-FR", R"(^[0-9A-ZÀÂÆÇÉÈÊËÏÎÔŒÙÛÜŸ]+$)" },
        { "it-IT", R"(^[0-9A-ZÀÉÈÌÎÓÒÙ]+$)" },
        { "hu-HU", R"(^[0-9A-ZÁÉÍÓÖŐÚÜŰ]+$)" },
        { "nb-NO", R"(^[0-9A-ZÆØÅ]+$)" },
        { "nl-NL", R"(^[0-9A-ZÁÉËÏÓÖÜÚ]+$)" },
        { "nn-NO", R"(^[0-9A-ZÆØÅ]+$)" },
        { "pl-PL", R"(^[0-9A-ZĄĆĘŚŁŃÓŻŹ]+$)" },
        { "pt-PT", R"(^[0-9A-ZÃÁÀÂÄÇÉÊËÍÏÕÓÔÖÚÜ]+$)" },
        { "ru-RU", R"(^[0-9А-ЯЁ]+$)" },
        { "sl-SI", R"(^[0-9A-ZČĆĐŠŽ]+$)" },
        { "sk-SK", R"(^[0-9A-ZÁČĎÉÍŇÓŠŤÚÝŽĹŔĽÄÔ]+$)" },
        { "sr-RS@latin", R"(^[0-9A-ZČĆŽŠĐ]+$)" },
        { "sr-RS", R"(^[0-9А-ЯЂЈЉЊЋЏ]+$)" },
        { "sv-SE", R"(^[0-9A-ZÅÄÖ]+$)" },
        { "tr-TR", R"(^[0-9A-ZÇĞİıÖŞÜ]+$)" },
        { "uk-UA", R"(^[0-9А-ЩЬЮЯЄIЇҐі]+$)" },
        { "ku-IQ", R"(^[٠١٢٣٤٥٦٧٨٩0-9ئابپتجچحخدرڕزژسشعغفڤقکگلڵمنوۆھەیێيطؤثآإأكضصةظذ]+$)" },
        { "ar", R"(^[٠١٢٣٤٥٦٧٨٩0-9ءآأؤإئابةتثجحخدذرزسشصضطظعغفقكلمنهوىيًٌٍَُِّْٰ]+$)" },
        { "he", R"(^[0-9א-ת]+$)" },
        { "fa-IR", R"(^["0-9آابپتثجچهخدذرزژسشصضطظعغفقکگلمنوهی۱۲۳۴۵۶۷۸۹۰"]+$)" },
        };
        
        std::string locale;
		std::vector<std::string> englishLocales = englishLocalesTable(),
		        arabicLocales = arabicLocalesTable();
		size_t i, size;
        for (i = 0, size = englishLocales.size(); i < size; i++) {
            locale = "en-" + englishLocales[i];
            table[locale] = table["en-US"];
        }
		for (i = 0, size = arabicLocales.size(); i < size; i++) {
            locale = "ar-" + arabicLocales[i];
            table[locale] = table["ar"];
        }
		table["pt-BR"] = table["pt-PT"];
		table["pl-Pl"] = table["pl-PL"];
		return table;        
    };

    std::map<std::string, std::string> decimalTable()
    {
        std::map<std::string, std::string> table
        {
            { "en-US", "\\." },
            {"ar", "٫" },
        };            

        std::string locale;
		std::vector<std::string> englishLocales = englishLocalesTable(),
		        arabicLocales = arabicLocalesTable(),
				dotDecimal = dotDecimalTable(),
				commaDecimal = commaDecimalTable();
		size_t i, size;
        for (i = 0, size = englishLocales.size(); i < size; i++) {
            locale = "en-" + englishLocales[i];
            table[locale] = table["en-US"];
        }
		for (i = 0, size = arabicLocales.size(); i < size; i++) {
            locale = "ar-" + arabicLocales[i];
            table[locale] = table["ar"];
        }
		
		for (i = 0, size = dotDecimal.size(); i < size; i++) {
		  table[dotDecimal[i]] = table["en-US"];
		}

		for (i = 0, size = commaDecimal.size(); i < size; i++) {
		  table[commaDecimal[i]] = ",";
		}
		return table;        
	};
}
