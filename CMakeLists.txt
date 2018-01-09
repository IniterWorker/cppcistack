cmake_minimum_required(VERSION 3.0)

project(cppcistack)

include(GTest.cmake)

set(CMAKE_CXX_STANDARD 17)

set(COVERAGE OFF CACHE BOOL "Coverage")

set(SOURCES_FILES src/Project.cpp include/Project.hpp)
set(TESTS_FILES test/unit_project.cpp)
set(MAIN_FILE src/main.cpp)

add_executable(projet ${SOURCES_FILES} ${MAIN_FILE})
add_executable(tests ${SOURCES_FILES} ${TESTS_FILES})

find_package (Threads)

include_directories(include)

set(LIBS gtest gmock ${CMAKE_THREAD_LIBS_INIT})

if (MSVC)
    target_compile_options(tests PRIVATE /std:c++17 /W4 /WX)

    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Ox")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /Od")
    target_link_libraries(tests ${LIBS})
    # VS 2017 removed tr1
    add_definitions(-DGTEST_HAS_TR1_TUPLE=0)
else()
    target_compile_options(tests PRIVATE -std=c++17 -g -Wall -Werror -Wextra -Wpedantic -Wconversion -Wswitch-default -Wswitch-enum -Wunreachable-code -Wwrite-strings -Wcast-align -Wshadow -Wundef)

    if (COVERAGE)
        target_compile_options(tests PRIVATE --coverage)
        target_link_libraries(tests PRIVATE --coverage ${LIBS})
    else()
        target_link_libraries(tests ${LIBS})
    endif()
endif()