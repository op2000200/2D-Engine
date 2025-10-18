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
            window.update(activeScene);
        }
    }

    void Game::setActiveScene(Scene *scene)
    {
        activeScene = scene;
    }
} // namespace engine
