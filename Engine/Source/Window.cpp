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

    void Window::update(std::vector<Object*> renderQueue)
    {
        window.clear();
        for (size_t i = 0; i < renderQueue.size(); i++)
        {
            window.draw(*renderQueue[i]);
        }
        window.display();
    }
} // namespace engine
