cmake_minimum_required (VERSION 3.0.0)
project (valius)

aux_source_directory (src SRC)
add_library (valius.alpha SHARED src/alpha.cc)
add_library (valius.alpha-s STATIC src/alpha.cc)
include_directories (include)
