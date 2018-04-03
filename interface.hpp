#include "billiards.hpp"
class BilliardsInterface {
  private:
    Table* table;
    Ball* ball;
  public:
    BilliardsInterface(int tableWidth, int tableHeight, int ballX, int ballY, int ballVX, int ballVY);
    void moveBall(int dt);
    void setBallLocation(int x, int y);
    void setBallSpeed(int vx, int vy);
};
