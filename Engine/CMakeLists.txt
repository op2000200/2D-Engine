set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.x
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_library(Engine STATIC
    Include/Game.hpp

    Include/General/Window.hpp
    Include/General/Things.hpp
    Include/General/Object.hpp

    Include/GameElements/Scene.hpp

    Include/GameElements/LevelElements/GameObject.hpp

    Source/Game.cpp

    Source/General/Window.cpp
    Source/General/Object.cpp

    Source/GameElements/Scene.cpp

    Source/GameElements/LevelElements/GameObject.cpp
)

set_target_properties(Engine PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(Engine
    PUBLIC
        Include
        Source
)

target_link_libraries(Engine
    PRIVATE 
        sfml-graphics
        sfml-window
        sfml-system
        sfml-network
        sfml-main
        sfml-audio
)