add_library(lib1 STATIC lib1.cpp lib1.hpp)

target_include_directories(lib1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(lib1
    PUBLIC
        base_dep
)


