#include <string>
#include <map>
#include <regex>
#include <vector>

namespace valius
{
namespace alpha
{
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
            
        std::vector<std::string> englishLocales { "AU", "GB", "HK", "IN", "NZ", "ZA", "ZM" };
        std::string locale;
        for (size_t i = 0; i < englishLocales.size(); i++) {
            locale = "en-" + englishLocales[i];
            table[locale] = table["en-US"];
        }
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
            
        std::vector<std::string> englishLocales { "AU", "GB", "HK", "IN", "NZ", "ZA", "ZM" };
        std::string locale;
        for (size_t i = 0; i < englishLocales.size(); i++) {
        locale = "en-" + englishLocales[i];
        table[locale] = table["en-US"];
        }
    return table;        
    };

    std::map<std::string, std::string> decimalTable()
    {
        std::map<std::string, std::string> table
        {
            { "en-US", "\\." },
            {"ar", "٫" },
        };
            
        std::vector<std::string> englishLocales { "AU", "GB", "HK", "IN", "NZ", "ZA", "ZM" }; std::string locale;
        for (size_t i = 0; i < englishLocales.size(); i++) {
            locale = "en-" + englishLocales[i];
            table[locale] = table["en-US"];
        }
        return table;        
    };
    
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
            throw std::exception("Unknown language name");
        }
        std::regex regex(pattern, std::regex_constants::ECMAScript | std::regex_constants::icase);
        return std::regex_match(s, regex);
    }
    
}
}