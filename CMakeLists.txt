 cmake_minimum_required (VERSION 3.5)

project (main)

# Set C and C++ standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(${PROJECT_SOURCE_DIR}/includes)

# Glob source files
file(GLOB_RECURSE C_SOURCES "./src/*.c")
file(GLOB_RECURSE CPP_SOURCES "./src/*.cpp")
file(GLOB_RECURSE HEADERS "./includes/*.h")
file(GLOB_RECURSE MAIN "./main.cpp")

# Add all sources to the executable
add_executable(main ${MAIN} ${C_SOURCES} ${CPP_SOURCES} ${HEADERS})

# Find Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test executable
file(GLOB_RECURSE TEST_SOURCES "./tests/*.cpp")
add_executable(runUnitTests ${TEST_SOURCES} ${C_SOURCES} ${CPP_SOURCES} ${HEADERS})
target_link_libraries(runUnitTests GTest::gtest_main)


# This is so you can run your tests with CTest
add_test(NAME unitTests COMMAND runUnitTests)

            