add_executable(cmake_testing main.cpp main.hpp)

target_include_directories(cmake_testing PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(cmake_testing PUBLIC base_dep lib1 lib2)
target_include_directories(cmake_testing PUBLIC base_dep lib1 lib2)
