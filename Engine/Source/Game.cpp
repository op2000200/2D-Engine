#include <Game.hpp>

namespace Engine
{
    Game::Game()
    {
    }

    Game::Game(Config config)
        : window(config)
    {
        if (config.debugInfo)
        {
            //draw debug
        }
    }

    Game::~Game()
    {
    }

    void Game::run()
    {
        while (true)
        {
            window.update(renderQueue);
        }
    }

    void Game::addObjectToRender(Object* obj)
    {
        renderQueue.push_back(obj);
    }
} // namespace engine
