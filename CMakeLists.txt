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


