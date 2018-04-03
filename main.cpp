#include "interface.hpp"

int main()
{
    BilliardsInterface interface(100, 50, 10, 20, 25, 5);
    interface.moveBall(10);
    interface.setBallLocation(10, 15);
    interface.moveBall(10);
}
