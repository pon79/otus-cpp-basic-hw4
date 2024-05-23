#pragma once

#include <iostream>

class Color {
  public:
    Color();
    Color(double red, double green, double blue);
    double red() const;
    double green() const;
    double blue() const;

    void setRed( double red);
    void setGreen( double green);
    void setBlue( double blue);

  private:
    double r{};
    double g{};
    double b{};
};

inline std::istream& operator>>(std::istream& stream, Color& color) {
    double r, g, b;

    stream >> r >> g >> b;

    if( stream ) {
        color.setRed( r );
        color.setGreen( g );
        color.setBlue( b );
    } else {
        stream.clear( std::istream::failbit );
    }

    return stream;
}
