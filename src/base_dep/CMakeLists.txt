add_library(base_dep
    STATIC
        base_dep.cpp
        base_dep.hpp
)

target_include_directories(base_dep PUBLIC
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
