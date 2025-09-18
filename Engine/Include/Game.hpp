#pragma once

#include <Window.hpp>

namespace Engine
{
    class Game
    {
    private:
        Engine::Window window;
        std::vector<Object*> renderQueue;
    public:
        Game();
        Game(Config config);
        ~Game();

        void run();
        void addObjectToRender(Object*);
    };
} // namespace engine
