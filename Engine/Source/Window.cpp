#include <Window.hpp>

namespace Engine
{
    Window::Window()
        : window(sf::VideoMode(sf::Vector2u(100, 100)), "Window default title", sf::Style::None)
    {
    }

    Window::Window(Config config)
        : window(sf::VideoMode(sf::Vector2u(config.resolution.x, config.resolution.y)), config.windowTitle, sf::Style::None)
    {
        
    }

    Window::~Window()
    {
    }

    void Window::update(Scene *scene)
    {
        window.clear();
        drawScene(scene);
        window.display();
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
