set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.x
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(sampleWindow WIN32
    SampleWindow.cpp
)

target_link_libraries(sampleWindow
    PRIVATE 
        sfml-graphics
        sfml-window
        sfml-system
        sfml-network
        sfml-main
        sfml-audio
    PUBLIC
        Engine
)

target_include_directories(
    sampleWindow PUBLIC
        ${PROJECT_BINARY_DIR}/Engine
)