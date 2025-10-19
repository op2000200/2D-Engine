#pragma once

#include <General/Window.hpp>
#include <GameElements/Scene.hpp>

namespace Engine
{
    class Game
    {
    private:
        Engine::Window window;
        Scene* activeScene;
    public:
        Game();
        Game(Config config);
        ~Game();

        void run();
        void setActiveScene(Scene* scene);
    };
} // namespace engine
