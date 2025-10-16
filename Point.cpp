#include "Point.h"

Point::Point(int px, int py)
{
	x = px;
	y = py;
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

void Point::setX(int px)
{
	x = px;
}

void Point::setY(int py)
{
	y = py;
}


