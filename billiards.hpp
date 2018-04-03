class Table;

class Ball {
  public:
    Ball(int _x, int _y, int _vx, int _vy, Table* t);
    void move(int dt);
    int getX() { return x; }
    int getY() { return y; }
    int getVX() { return vx; }
    int getVY() { return vy; }
    void setLocation(int _x, int _y);
    void setSpeed(int _vx, int _vy);
  private:
    int x;
    int y;
    int vx;
    int vy;
    Table* table;
};

class Table {
  public:
    Table(int w, int h);
    bool containsPoint(int x, int y);
    void reflect(Ball* b);
  private:
    int width;
    int height;
};
