#pragma once

#include <Object.hpp>
#include <Scene.hpp>

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

        void update(Scene *scene);
        void drawScene(Scene *scene);
    };        
} // namespace engine