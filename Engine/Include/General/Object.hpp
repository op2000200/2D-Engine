#pragma once

#include <General/Things.hpp>

namespace Engine
{
    class Object : public sf::Drawable
    {
    protected:
        sf::ConvexShape shape;
        unsigned int layer;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    public:
        Object();
        ~Object();
    };

    class Point : public Object
    {
    private:
    public:
        Point();
        Point(sf::Vector2f position, sf::Color color);
        ~Point();
    };

    class Rectangle : public Object
    {
    private:
    public:
        Rectangle();
        Rectangle(sf::Vector2f position, sf::Vector2i size, sf::Color color);
        ~Rectangle();
    };

    class Circle : public Object
    {
    private:
    public:
        Circle();
        Circle(sf::Vector2f position, float radius, sf::Color color);
        Circle(sf::Vector2f position, float radius, sf::Color color, unsigned int points);
        ~Circle();
    };
} // namespace Engine
