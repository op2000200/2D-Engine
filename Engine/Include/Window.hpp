#pragma once

#include <Object.hpp>

namespace Engine
{
    class Window
    {
    private:
        sf::RenderWindow window;
    public:
        Window();
        Window(Config config);
        ~Window();

        void update(std::vector<Object*> renderQueue);
    };        
} // namespace engine