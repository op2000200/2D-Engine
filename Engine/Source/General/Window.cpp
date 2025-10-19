#include <General/Window.hpp>

namespace Engine
{
    Window::Window()
        : window(sf::VideoMode(sf::Vector2u(100, 100)), "Window default title", sf::Style::None)
    {
    }

    Window::Window(Config config)
        : window(sf::VideoMode(sf::Vector2u(config.resolution.x, config.resolution.y)), config.windowTitle, sf::Style::None)
    {
        screenRefreshTime = sf::seconds(1. / config.screenRefreshRate);
        gameRefreshTime = sf::seconds(1. / config.gameRefreshRate);
    }

    Window::~Window()
    {
    }

    void Window::update(Scene *scene)
    {
        sf::Clock screenTickTimer;
        sf::Clock gameTickTimer;
        while (window.isOpen())
        {
            screenTickTimer.restart();
            if (screenTickTimer.getElapsedTime() < screenRefreshTime) {
                window.clear();
                drawScene(scene);
                window.display();
                while (screenTickTimer.getElapsedTime() < screenRefreshTime)
                {
                    gameTickTimer.restart();
                    if (gameTickTimer.getElapsedTime() < gameRefreshTime) {
                        sf::sleep(sf::Time(gameRefreshTime - gameTickTimer.getElapsedTime()));
                    }
                }
            }
        }
    }

    void Window::drawScene(Scene *scene)
    {
        std::vector<Object*> renderQueue = scene->getRenderQueue();
        for (size_t i = 0; i < renderQueue.size(); i++)
        {
            window.draw(*renderQueue[i]);
        }
    }
} // namespace engine
