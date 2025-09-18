#pragma once

#include <sfml/Graphics.hpp>
#include <sfml/Window.hpp>
#include <iostream>
#include <vector>
#include <math.h>

namespace Engine
{
    struct Config
    {
        sf::Vector2i resolution;
        std::string windowTitle;
        bool debugInfo = false;
    };    
} // namespace Engine
