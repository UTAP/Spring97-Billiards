#include "interface.hpp"

BilliardsInterface::BilliardsInterface(int tableWidth, int tableHeight, int ballX, int ballY, int ballVX, int ballVY)
{
  table = new Table(tableWidth, tableHeight);
  ball = new Ball(ballX, ballY, ballVX, ballVY, table);
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
