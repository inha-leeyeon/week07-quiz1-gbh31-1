#include "Square.h"

Square::Square(const std::string pname, int px, int py, unsigned int pside) :Point(px, py)
{
	name = pname;
	side = pside;
	area = side * side;
}

unsigned int Square::getSide() const
{
	return side;
}

unsigned int Square::getArea() const
{
	return area;
}

std::string Square::getName() const
{
	return name;
}

void Square::setSide(unsigned int pside)
{
	side = pside;
}

void Square::setArea(unsigned int side)
{
	area = side;
}

void Square::setName(std::string pname)
{
	name = pname;
}




