cmake_minimum_required (VERSION 3.0.0)
project (valius)

aux_source_directory (src SRC)

add_library (valius.alpha SHARED src/alpha.cc)
add_library (alpha STATIC src/alpha.cc)
include_directories (include)

add_executable (test-alpha tests/test-alpha.cc)
target_link_libraries (test-alpha alpha)
