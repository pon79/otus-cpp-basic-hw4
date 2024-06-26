#pragma once

#include "Color.hpp"
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {

public:
    Ball(const Point center, const bool isCollidable, const Color color, const double radius, const Velocity velocity);
    ~Ball() = default;
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    bool getCollidable() const;

private:
    Point m_center;
    bool m_isCollidable;
    Color m_color;
    double m_radius;
    Velocity m_velocity;

};
