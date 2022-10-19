cmake_minimum_required(VERSION 3.23)
project(BakcylProgramowania2022)

set(CMAKE_CXX_STANDARD 20)

set(EXE "ex01;ex03;ex04;")

foreach(PROJ ${EXE})
    add_executable(${PROJ})
    file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/${PROJ}/src/*.cc)
    target_sources(${PROJ} PRIVATE ${SOURCES})
    target_include_directories(${PROJ} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/${PROJ}/include)
endforeach()