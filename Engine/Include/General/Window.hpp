#pragma once

#include <General/Object.hpp>
#include <GameElements/Scene.hpp>

namespace Engine
{
    class Window
    {
    private:
        sf::RenderWindow window;
        sf::Time screenRefreshTime;
        sf::Time gameRefreshTime;
    public:
        Window();
        Window(Config config);
        ~Window();

        void update(Scene *scene);
        void drawScene(Scene *scene);
    };        
} // namespace engine