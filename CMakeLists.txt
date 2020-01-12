cmake_minimum_required (VERSION 3.0.0)
project (valius)

aux_source_directory (src SRC)

add_library (valius.isAlpha SHARED src/isAlpha.cc)
add_library (isAlpha STATIC src/isAlpha.cc)
include_directories (include)

add_executable (test-isAlpha tests/test-isAlpha.cc)
target_link_libraries (test-isAlpha isAlpha)
