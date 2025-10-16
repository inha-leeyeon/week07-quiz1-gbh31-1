#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include "Point.h"
using namespace std;

class Square : public Point {
public:
    Square(string n = "", int x = 0, int y = 0, unsigned int s = 0)
        : Point(x, y), name(n), side(s), area(s * s) {}

    string getName() const { return name; }
    unsigned int getSide() const { return side; }
    unsigned int getArea() const { return area; }

    void setName(string n) { name = n; }
    void setSide(unsigned int s) { side = s; area = s * s; }

private:
    string name;
    unsigned int side;
    unsigned int area;
};

#endif
