#include "billiards.hpp"
class BilliardsInterface {
  private:
    Table* table;
    Ball* ball;
  public:
    BilliardsInterface();
    void moveBall(int dt);
    void setBallLocation(int x, int y);
    void setBallSpeed(int vx, int vy);
};
