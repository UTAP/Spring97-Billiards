#include <iostream>
#include <cstdlib>
#include "billiards.hpp"
using namespace std;

Table::Table(int w, int h)
{
    if (w <= 0 || h <= 0)
        abort();
    width = w;
    height = h;
}

bool Table::containsPoint(int x, int y) {
    return x >= 0 && x < width && y >= 0 && y < height;
}

void Table::reflect(Ball* b) {
    int x = b->getX();
    int y = b->getY();
    int vx = b->getVX();
    int vy = b->getVY();

    while (!containsPoint(x, y)) {
        if (x < 0) {
            x = -x;
            vx = -vx;
        }
        if (x >= width) {
            x = 2 * width - x;
            vx = -vx;
        }
        if (y < 0) {
            y = -y;
            vy = -vy;
        }
        if (y >= height) {
            y = 2 * height - y;
            vy = -vy;
        }
    }
    b->setLocation(x, y);
    b->setSpeed(vx, vy);
}


Ball::Ball(int _x, int _y, int _vx, int _vy, Table* t)
{
    table = t;
    setLocation(_x, _y);
    setSpeed(_vx, _vy);
}

void Ball::setLocation(int _x, int _y) {
    if (!table->containsPoint(_x, _y))
        abort();
    x = _x;
    y = _y;
}

void Ball::setSpeed(int _vx, int _vy) {
    vx = _vx;
    vy = _vy;
}

void Ball::move(int dt)
{
    x += vx * dt;
    y += vy * dt;

    if (!table->containsPoint(x, y))
        table->reflect(this);
}
