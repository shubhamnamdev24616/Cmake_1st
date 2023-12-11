cmake_minimum_required(VERSION 3.16.3)
project("New_cmake")

project(UT_TRACKER VERSION 2.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

SET(CMAKE_CXX_FLAGS "-O0")
SET(CMAKE_C_FLAGS "-O0")
SET(GCC_COVERAGE_COMPILE_FLAGS "-fprofile-arcs -ftest-coverage ")
SET(GCC_COVERAGE_LINK_FLAGS "-lgcov")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

set(MAIN_SOURCE
    main.cpp
    test.cpp
)




#UNIT_TEST
set(UT_SRC 
    ${MAIN_SOURCE}
    test/UT/UT.cpp  

# Locate Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add your test source files
set(TEST_SOURCES test.cpp)

#
add_executable(a.out main.cpp calc.cpp test.cpp)
Create the test executable
add_executable(test ${TEST_SOURCES})
target_link_libraries(test ${GTEST_LIBRARIES} pthread)
target_link_libraries(test  GTest::gtest_main gcov) 



