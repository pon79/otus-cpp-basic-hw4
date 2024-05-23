#pragma once
#include <cmath>
#include <iostream>

class Point {
  public:
    Point() = default;
    inline Point(double x, double y) : x{x}, y{y} {};
    double x{};
    double y{};

};

inline std::istream& operator>>(std::istream& stream, Point& point) {

    double x, y;

    stream >> x >> y;

    if( stream ) {
        point.x = x;
        point.y = y;
    } else {
        stream.clear( std::istream::failbit );
    }

    return stream;
}


inline Point operator-(const Point& lhs, const Point& rhs) {
    return {lhs.x - rhs.x, lhs.y - rhs.y};
}

inline Point operator+(const Point& lhs, const Point& rhs) {
    return {lhs.x + rhs.x, lhs.y + rhs.y};
}

inline Point operator*(const Point& p, double scalar) {
    return {p.x * scalar, p.y * scalar};
}

inline Point operator/(const Point& p, double scalar) {
    return {p.x / scalar, p.y / scalar};
}

inline double distance2(const Point& lhs, const Point& rhs) {
    const Point delta = lhs - rhs;
    return delta.x * delta.x + delta.y * delta.y;
}
