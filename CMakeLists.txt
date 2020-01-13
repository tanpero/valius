cmake_minimum_required (VERSION 3.0.0)
project (valius)

aux_source_directory (src SRC)

# valius.isAlpha
add_library (valius.isAlpha SHARED src/alpha.cc src/isAlpha.cc)
add_library (isAlpha STATIC src/alpha.cc src/isAlpha.cc)
include_directories (include)

add_executable (test-isAlpha tests/test-isAlpha.cc)
target_link_libraries (test-isAlpha isAlpha)

# valius.isASCII
add_library (valius.isASCII SHARED src/isASCII.cc)
add_library (isASCII STATIC src/isASCII.cc)
include_directories (include)

add_executable (test-isASCII tests/test-isASCII.cc)
target_link_libraries (test-isASCII isASCII)

# valius.isBase32
add_library (valius.isBase32 SHARED src/isBase32.cc)
add_library (isBase32 STATIC src/isBase32.cc)
include_directories (include)

add_executable (test-isBase32 tests/test-isBase32.cc)
target_link_libraries (test-isBase32 isBase32)

# valius.isBase64
add_library (valius.isBase64 SHARED src/isBase64.cc)
add_library (isBase64 STATIC src/isBase64.cc)
include_directories (include)

add_executable (test-isBase64 tests/test-isBase64.cc)
target_link_libraries (test-isBase64 isBase64)

# valius.isBIC
add_library (valius.isBIC SHARED src/isBIC.cc)
add_library (isBIC STATIC src/isBIC.cc)
include_directories (include)

add_executable (test-isBIC tests/test-isBIC.cc)
target_link_libraries (test-isBIC isBIC)

# valius.isBoolean
add_library (valius.isBoolean SHARED src/isBoolean.cc)
add_library (isBoolean STATIC src/isBoolean.cc)
include_directories (include)

add_executable (test-isBoolean tests/test-isBoolean.cc)
target_link_libraries (test-isBoolean isBoolean)

# valius.isByteLength
add_library (valius.isByteLength SHARED src/isByteLength.cc)
add_library (isByteLength STATIC src/isByteLength.cc)
include_directories (include)

add_executable (test-isByteLength tests/test-isByteLength.cc)
target_link_libraries (test-isByteLength isByteLength)

# valius.isCreditCard
add_library (valius.isCreditCard SHARED src/isCreditCard.cc)
add_library (isCreditCard STATIC src/isCreditCard.cc)
include_directories (include)

add_executable (test-isCreditCard tests/test-isCreditCard.cc)
target_link_libraries (test-isCreditCard isCreditCard)

# valius.isCurrency
add_library (valius.isCurrency SHARED src/isCurrency.cc)
add_library (isCurrency STATIC src/isCurrency.cc)
include_directories (include)

add_executable (test-isCurrency tests/test-isCurrency.cc)
target_link_libraries (test-isCurrency isCurrency)

# valius.isDataURI
add_library (valius.isDataURI SHARED src/isDataURI.cc)
add_library (isDataURI STATIC src/isDataURI.cc)
include_directories (include)

add_executable (test-isDataURI tests/test-isDataURI.cc)
target_link_libraries (test-isDataURI isDataURI)

# valius.isDecimal
add_library (valius.isDecimal SHARED src/alpha.cc src/isDecimal.cc)
add_library (isDecimal STATIC src/alpha.cc src/isDecimal.cc)
include_directories (include)

add_executable (test-isDecimal tests/test-isDecimal.cc)
target_link_libraries (test-isDecimal isDecimal)
	
# valius.isDivisibleBy
add_library (valius.isDivisibleBy SHARED src/isDivisibleBy.cc)
add_library (isDivisibleBy STATIC src/isDivisibleBy.cc)
include_directories (include)

add_executable (test-isDivisibleBy tests/test-isDivisibleBy.cc)
target_link_libraries (test-isDivisibleBy isDivisibleBy)

# valius.isEmail
add_library (valius.isEmail SHARED src/isEmail.cc)
add_library (isEmail STATIC src/isEmail.cc)
include_directories (include)

add_executable (test-isEmail tests/test-isEmail.cc)
target_link_libraries (test-isEmail isEmail)

# valius.isEmpty
add_library (valius.isEmpty SHARED src/isEmpty.cc)
add_library (isEmpty STATIC src/isEmpty.cc)
include_directories (include)

add_executable (test-isEmpty tests/test-isEmpty.cc)
target_link_libraries (test-isEmpty isEmpty)

# valius.isFloat
add_library (valius.isFloat SHARED src/isFloat.cc)
add_library (isFloat STATIC src/isFloat.cc)
include_directories (include)

add_executable (test-isFloat tests/test-isFloat.cc)
target_link_libraries (test-isFloat isFloat)

# valius.isFQDN
add_library (valius.isFQDN SHARED src/isFQDN.cc)
add_library (isFQDN STATIC src/isFQDN.cc)
include_directories (include)

add_executable (test-isFQDN tests/test-isFQDN.cc)
target_link_libraries (test-isFQDN isFQDN)

# valius.isFullWidth
add_library (valius.isFullWidth SHARED src/isFullWidth.cc)
add_library (isFullWidth STATIC src/isFullWidth.cc)
include_directories (include)

add_executable (test-isFullWidth tests/test-isFullWidth.cc)
target_link_libraries (test-isFullWidth isFullWidth)

# valius.isHalfWidth
add_library (valius.isHalfWidth SHARED src/isHalfWidth.cc)
add_library (isHalfWidth STATIC src/isHalfWidth.cc)
include_directories (include)

add_executable (test-isHalfWidth tests/test-isHalfWidth.cc)
target_link_libraries (test-isHalfWidth isHalfWidth)

# valius.isHash
add_library (valius.isHash SHARED src/isHash.cc)
add_library (isHash STATIC src/isHash.cc)
include_directories (include)

add_executable (test-isHash tests/test-isHash.cc)
target_link_libraries (test-isHash isHash)

# valius.isHexademical
add_library (valius.isHexademical SHARED src/isHexademical.cc)
add_library (isHexademical STATIC src/isHexademical.cc)
include_directories (include)

add_executable (test-isHexademical tests/test-isHexademical.cc)
target_link_libraries (test-isHexademical isHexademical)

# valius.isHexColor
add_library (valius.isHexColor SHARED src/isHexColor.cc)
add_library (isHexColor STATIC src/isHexColor.cc)
include_directories (include)

add_executable (test-isHexColor tests/test-isHexColor.cc)
target_link_libraries (test-isHexColor isHexColor)

# valius.isIdentityCard
add_library (valius.isIdentityCard SHARED src/isIdentityCard.cc)
add_library (isIdentityCard STATIC src/isIdentityCard.cc)
include_directories (include)

add_executable (test-isIdentityCard tests/test-isIdentityCard.cc)
target_link_libraries (test-isIdentityCard isIdentityCard)

# valius.isIs
add_library (valius.isIs SHARED src/isIs.cc)
add_library (isIs STATIC src/isIs.cc)
include_directories (include)

add_executable (test-isIs tests/test-isIs.cc)
target_link_libraries (test-isIs isIs)

# valius.isInt
add_library (valius.isInt SHARED src/isInt.cc)
add_library (isInt STATIC src/isInt.cc)
include_directories (include)

add_executable (test-isInt tests/test-isInt.cc)
target_link_libraries (test-isInt isInt)

# valius.isIP
add_library (valius.isIP SHARED src/isIP.cc)
add_library (isIP STATIC src/isIP.cc)
include_directories (include)

add_executable (test-isIP tests/test-isIP.cc)
target_link_libraries (test-isIP isIP)

# valius.isIPRange
add_library (valius.isIPRange SHARED src/isIPRange.cc)
add_library (isIPRange STATIC src/isIPRange.cc)
include_directories (include)

add_executable (test-isIPRange tests/test-isIPRange.cc)
target_link_libraries (test-isIPRange isIPRange)

# valius.isISBN
add_library (valius.isISBN SHARED src/isISBN.cc)
add_library (isISBN STATIC src/isISBN.cc)
include_directories (include)

add_executable (test-isISBN tests/test-isISBN.cc)
target_link_libraries (test-isISBN isISBN)

# valius.isISIN
add_library (valius.isISIN SHARED src/isISIN.cc)
add_library (isISIN STATIC src/isISIN.cc)
include_directories (include)

add_executable (test-isISIN tests/test-isISIN.cc)
target_link_libraries (test-isISIN isISIN)

# valius.isISO3166Alpha2
add_library (valius.isISO3166Alpha2 SHARED src/isISO3166Alpha2.cc)
add_library (isISO3166Alpha2 STATIC src/isISO3166Alpha2.cc)
include_directories (include)

add_executable (test-isISO3166Alpha2 tests/test-isISO3166Alpha2.cc)
target_link_libraries (test-isISO3166Alpha2 isISO3166Alpha2)

# valius.isISO3166Alpha3
add_library (valius.isISO3166Alpha3 SHARED src/isISO3166Alpha3.cc)
add_library (isISO3166Alpha3 STATIC src/isISO3166Alpha3.cc)
include_directories (include)

add_executable (test-isISO3166Alpha3 tests/test-isISO3166Alpha3.cc)
target_link_libraries (test-isISO3166Alpha3 isISO3166Alpha3)

# valius.isISSN
add_library (valius.isISSN SHARED src/isISSN.cc)
add_library (isISSN STATIC src/isISSN.cc)
include_directories (include)

add_executable (test-isISSN tests/test-isISSN.cc)
target_link_libraries (test-isISSN isISSN)

# valius.isISO8601
add_library (valius.isISO8601 SHARED src/isISO8601.cc)
add_library (isISO8601 STATIC src/isISO8601.cc)
include_directories (include)

add_executable (test-isISO8601 tests/test-isISO8601.cc)
target_link_libraries (test-isISO8601 isISO8601)

# valius.isISRC
add_library (valius.isISRC SHARED src/isISRC.cc)
add_library (isISRC STATIC src/isISRC.cc)
include_directories (include)

add_executable (test-isISRC tests/test-isISRC.cc)
target_link_libraries (test-isISRC isISRC)

# valius.isRFC3339
add_library (valius.isRFC3339 SHARED src/isRFC3339.cc)
add_library (isRFC3339 STATIC src/isRFC3339.cc)
include_directories (include)

add_executable (test-isRFC3339 tests/test-isRFC3339.cc)
target_link_libraries (test-isRFC3339 isRFC3339)

# valius.isJSON
add_library (valius.isJSON SHARED src/isJSON.cc)
add_library (isJSON STATIC src/isJSON.cc)
include_directories (include)

add_executable (test-isJSON tests/test-isJSON.cc)
target_link_libraries (test-isJSON isJSON)

# valius.isJWT
add_library (valius.isJWT SHARED src/isJWT.cc)
add_library (isJWT STATIC src/isJWT.cc)
include_directories (include)

add_executable (test-isJWT tests/test-isJWT.cc)
target_link_libraries (test-isJWT isJWT)

# valius.isLatLong
add_library (valius.isLatLong SHARED src/isLatLong.cc)
add_library (isLatLong STATIC src/isLatLong.cc)
include_directories (include)

add_executable (test-isLatLong tests/test-isLatLong.cc)
target_link_libraries (test-isLatLong isLatLong)

# valius.isLength
add_library (valius.isLength SHARED src/isLength.cc)
add_library (isLength STATIC src/isLength.cc)
include_directories (include)

add_executable (test-isLength tests/test-isLength.cc)
target_link_libraries (test-isLength isLength)

# valius.isLowerCase
add_library (valius.isLowerCase SHARED src/isLowerCase.cc)
add_library (isLowerCase STATIC src/isLowerCase.cc)
include_directories (include)

add_executable (test-isLowerCase tests/test-isLowerCase.cc)
target_link_libraries (test-isLowerCase isLowerCase)

# valius.isMACAddress
add_library (valius.isMACAddress SHARED src/isMACAddress.cc)
add_library (isMACAddress STATIC src/isMACAddress.cc)
include_directories (include)

add_executable (test-isMACAddress tests/test-isMACAddress.cc)
target_link_libraries (test-isMACAddress isMACAddress)

# valius.isMagnetURI
add_library (valius.isMagnetURI SHARED src/isMagnetURI.cc)
add_library (isMagnetURI STATIC src/isMagnetURI.cc)
include_directories (include)

add_executable (test-isMagnetURI tests/test-isMagnetURI.cc)
target_link_libraries (test-isMagnetURI isMagnetURI)

# valius.isMD5
add_library (valius.isMD5 SHARED src/isMD5.cc)
add_library (isMD5 STATIC src/isMD5.cc)
include_directories (include)

add_executable (test-isMD5 tests/test-isMD5.cc)
target_link_libraries (test-isMD5 isMD5)

# valius.isMIMEType
add_library (valius.isMIMEType SHARED src/isMIMEType.cc)
add_library (isMIMEType STATIC src/isMIMEType.cc)
include_directories (include)

add_executable (test-isMIMEType tests/test-isMIMEType.cc)
target_link_libraries (test-isMIMEType isMIMEType)

# valius.isMobilePhone
add_library (valius.isMobilePhone SHARED src/isMobilePhone.cc)
add_library (isMobilePhone STATIC src/isMobilePhone.cc)
include_directories (include)

add_executable (test-isMobilePhone tests/test-isMobilePhone.cc)
target_link_libraries (test-isMobilePhone isMobilePhone)

# valius.isMongold
add_library (valius.isMongold SHARED src/isMongold.cc)
add_library (isMongold STATIC src/isMongold.cc)
include_directories (include)

add_executable (test-isMongold tests/test-isMongold.cc)
target_link_libraries (test-isMongold isMongold)

# valius.isMultibyte
add_library (valius.isMultibyte SHARED src/isMultibyte.cc)
add_library (isMultibyte STATIC src/isMultibyte.cc)
include_directories (include)

add_executable (test-isMultibyte tests/test-isMultibyte.cc)
target_link_libraries (test-isMultibyte isMultibyte)

# valius.isNumeric
add_library (valius.isNumeric SHARED src/isNumeric.cc)
add_library (isNumeric STATIC src/isNumeric.cc)
include_directories (include)

add_executable (test-isNumeric tests/test-isNumeric.cc)
target_link_libraries (test-isNumeric isNumeric)

# valius.isOctal
add_library (valius.isOctal SHARED src/isOctal.cc)
add_library (isOctal STATIC src/isOctal.cc)
include_directories (include)

add_executable (test-isOctal tests/test-isOctal.cc)
target_link_libraries (test-isOctal isOctal)

# valius.isPostalCode
add_library (valius.isPostalCode SHARED src/isPostalCode.cc)
add_library (isPostalCode STATIC src/isPostalCode.cc)
include_directories (include)

add_executable (test-isPostalCode tests/test-isPostalCode.cc)
target_link_libraries (test-isPostalCode isPostalCode)

# valius.isSurrogatePair
add_library (valius.isSurrogatePair SHARED src/isSurrogatePair.cc)
add_library (isSurrogatePair STATIC src/isSurrogatePair.cc)
include_directories (include)

add_executable (test-isSurrogatePair tests/test-isSurrogatePair.cc)
target_link_libraries (test-isSurrogatePair isSurrogatePair)

# valius.isURL
add_library (valius.isURL SHARED src/isURL.cc)
add_library (isURL STATIC src/isURL.cc)
include_directories (include)

add_executable (test-isURL tests/test-isURL.cc)
target_link_libraries (test-isURL isURL)

# valius.isUpperCase
add_library (valius.isUpperCase SHARED src/isUpperCase.cc)
add_library (isUpperCase STATIC src/isUpperCase.cc)
include_directories (include)

add_executable (test-isUpperCase tests/test-isUpperCase.cc)
target_link_libraries (test-isUpperCase isUpperCase)

# valius.isUUID
add_library (valius.isUUID SHARED src/isUUID.cc)
add_library (isUUID STATIC src/isUUID.cc)
include_directories (include)

add_executable (test-isUUID tests/test-isUUID.cc)
target_link_libraries (test-isUUID isUUID)

# valius.isVariableWidth
add_library (valius.isVariableWidth SHARED src/isVariableWidth.cc)
add_library (isVariableWidth STATIC src/isVariableWidth.cc)
include_directories (include)

add_executable (test-isVariableWidth tests/test-isVariableWidth.cc)
target_link_libraries (test-isVariableWidth isVariableWidth)

# valius.isWhitelisted
add_library (valius.isWhitelisted SHARED src/isWhitelisted.cc)
add_library (isWhitelisted STATIC src/isWhitelisted.cc)
include_directories (include)

add_executable (test-isWhitelisted tests/test-isWhitelisted.cc)
target_link_libraries (test-isWhitelisted isWhitelisted)
