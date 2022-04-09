# CMake for googletest from: https://google.github.io/googletest/quickstart-cmake.html
cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  mathlib-test
  mathlib-test.cpp
)
target_link_libraries(
  mathlib-test
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(mathlib-test)