#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}   // ✅ 헤더 안에 구현까지
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int nx) { x = nx; }
    void setY(int ny) { y = ny; }

private:
    int x, y;
};

#endif
