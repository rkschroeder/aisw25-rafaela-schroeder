#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

struct Rectangle
{
    float area();
    float x = 0.0;
    float y = 0.0;
    float width = 0.0;
    float height = 0.0;
};

bool overlap(const Rectangle& r1, const Rectangle& r2);
#endif
