cmake_minimum_required (VERSION 3.0.0)
project (valius)

aux_source_directory (src SRC)

# valius.isAlpha
add_library (valius.isAlpha SHARED src/isAlpha.cc)
add_library (isAlpha STATIC src/isAlpha.cc)
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
