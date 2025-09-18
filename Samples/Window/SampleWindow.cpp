#include <iostream>
#include <Game.hpp>

int main()
{
    Engine::Config config;
    config.resolution = sf::Vector2i(1000,1000);
    config.windowTitle = "Engine";
    config.debugInfo = true;
    Engine::Game game(config);
    Engine::Rectangle rect(sf::Vector2f(500,500),sf::Vector2i(100,100), sf::Color::Red);
    game.addObjectToRender(&rect);
    game.run();
}