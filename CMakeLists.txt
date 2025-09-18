cmake_minimum_required(VERSION 3.30)

project (2dEngine LANGUAGES CXX)

add_subdirectory(Engine)

option(BuildExamples "Build examples" ON)

if (${BuildExamples})
    message(STATUS "Enabled building of examples")
    add_subdirectory(Samples/Window)
else ()
    message(STATUS "Disabled building of examples")
endif ()