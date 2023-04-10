#CONFIG
cmake_minimum_required (VERSION 3.26.0)
project (Hex)

#SETUP/BUILD
find_package(SFML REQUIRED)

add_subdirectory (src)

add_executable (Hex main.cpp)
target_link_libraries (Hex source_lib sfml::sfml)

#OUTPUT
set_target_properties( Hex PROPERTIES RUNTIME_OUTPUT_DIRECTORY  ${CMAKE_CURRENT_SOURCE_DIR}/bin)