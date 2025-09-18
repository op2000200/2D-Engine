#include "Object.hpp"

namespace Engine
{
    void Object::draw(sf::RenderTarget &target, sf::RenderStates states) const
    {
        target.draw(shape,states);
    }

    Object::Object()
    {
        layer = 0;
    }
    
    Object::~Object()
    {
    }

    Point::Point()
    {
        shape.setPointCount(4);
        shape.setPoint(0, sf::Vector2f(0, 0));
        shape.setPoint(1, sf::Vector2f(1, 0));
        shape.setPoint(2, sf::Vector2f(1, 1));
        shape.setPoint(3, sf::Vector2f(0, 1));
        shape.setFillColor(sf::Color::White);
        shape.setOrigin(sf::Vector2f(0.5, 0.5));
        shape.setPosition(sf::Vector2f(0, 0));
    }

    Point::Point(sf::Vector2f position, sf::Color color)
    {
        shape.setPointCount(4);
        shape.setPoint(0, sf::Vector2f(0, 0));
        shape.setPoint(1, sf::Vector2f(1, 0));
        shape.setPoint(2, sf::Vector2f(1, 1));
        shape.setPoint(3, sf::Vector2f(0, 1));
        shape.setFillColor(color);
        shape.setOrigin(sf::Vector2f(0.5, 0.5));
        shape.setPosition(position);
    }

    Point::~Point()
    {
    }

    Rectangle::Rectangle()
    {
        shape.setPointCount(4);
        shape.setPoint(0, sf::Vector2f(0, 0));
        shape.setPoint(1, sf::Vector2f(1, 0));
        shape.setPoint(2, sf::Vector2f(1, 1));
        shape.setPoint(3, sf::Vector2f(0, 1));
        shape.setFillColor(sf::Color::White);
        shape.setOrigin(sf::Vector2f(0.5, 0.5));
        shape.setPosition(sf::Vector2f(0, 0));
    }

    Rectangle::Rectangle(sf::Vector2f position, sf::Vector2i size, sf::Color color)
    {
        shape.setPointCount(4);
        shape.setPoint(0, sf::Vector2f(0, 0));
        shape.setPoint(1, sf::Vector2f(size.x, 0));
        shape.setPoint(2, sf::Vector2f(size.x, size.y));
        shape.setPoint(3, sf::Vector2f(0, size.y));
        shape.setFillColor(color);
        shape.setOrigin(sf::Vector2f(size.x / 2, size.y / 2));
        shape.setPosition(position);
    }

    Rectangle::~Rectangle()
    {
    }

    Circle::Circle()
    {
        shape.setPointCount(4);
        shape.setPoint(0, sf::Vector2f(1, 0));
        shape.setPoint(1, sf::Vector2f(2, 1));
        shape.setPoint(2, sf::Vector2f(1, 2));
        shape.setPoint(3, sf::Vector2f(0, 1));
        shape.setFillColor(sf::Color::White);
        shape.setOrigin(sf::Vector2f(1.f, 1.f));
        shape.setPosition(sf::Vector2f(0,0));
    }

    Circle::Circle(sf::Vector2f position, float radius, sf::Color color)
    {
        shape.setPointCount(90);
        float degIncrement = 360 / 90;
        for (size_t i = 0; i < 90; i++)
        {
            shape.setPoint(i, sf::Vector2f(cos((degIncrement * i * 3.14) / 180) * radius, sin((degIncrement * i * 3.14) / 180) * radius));
        }
        shape.setFillColor(sf::Color::White);
        shape.setOrigin(sf::Vector2f(radius, radius));
        shape.setPosition(position);
    }

    Circle::Circle(sf::Vector2f position, float radius, sf::Color color, unsigned int points)
    {
        shape.setPointCount(points);
        float degIncrement = 360 / points;
        for (size_t i = 0; i < points; i++)
        {
            shape.setPoint(i, sf::Vector2f(cos((degIncrement * i * 3.14) / 180) * radius, sin((degIncrement * i * 3.14) / 180) * radius));
        }
        shape.setFillColor(sf::Color::White);
        shape.setOrigin(sf::Vector2f(radius, radius));
        shape.setPosition(position);
    }

    Circle::~Circle()
    {
    }

} // namespace Engine
