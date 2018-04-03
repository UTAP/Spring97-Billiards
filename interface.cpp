#include "interface.hpp"

BilliardsInterface::BilliardsInterface()
{
  table = new Table(100, 50);
  ball = new Ball(10, 20, 25, 5, table);
}

void BilliardsInterface::moveBall(int dt)
{
  ball->move(dt);
}

void BilliardsInterface::setBallLocation(int x, int y)
{
  ball->setLocation(x, y);
}

void BilliardsInterface::setBallSpeed(int vx, int vy)
{
  ball->setSpeed(vx, vy);
}
