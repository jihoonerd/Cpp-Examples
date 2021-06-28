cmake_minimum_required(VERSION 3.0.0)
project(CppExamples VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(CppExamples main.cpp lib/read_csv.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/includes)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
