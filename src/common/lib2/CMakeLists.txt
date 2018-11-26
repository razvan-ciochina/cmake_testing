add_library(lib2 STATIC lib2.cpp lib2.hpp)

target_include_directories(lib2
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(lib2
    PUBLIC
        lib1
)
