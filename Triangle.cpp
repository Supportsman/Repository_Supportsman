#include <Triangle.hpp>
#include <iostream>



RightTriangle::RightTriangle() : Figure("undefined"), a(Point()), b(Point()), c(Point()) {}

RightTriangle::RightTriangle(const std::string& color, const Point& a, const Point& b, const Point& c ): Figure(color),a(a),b(b),c(c){}

RightTriangle::RightTriangle(const RightTriangle& other
