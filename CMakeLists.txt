#CONFIG
cmake_minimum_required (VERSION 2.8.11)
project (Hex)

#SETUP/BUILD
add_subdirectory (src)

add_executable (Hex main.cpp)
target_link_libraries (Hex source_lib)

#OUTPUT
set_target_properties( Hex PROPERTIES RUNTIME_OUTPUT_DIRECTORY  ${CMAKE_CURRENT_SOURCE_DIR}/bin)
