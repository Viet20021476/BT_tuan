#include <iostream>

using namespace std;

struct Point
{
    int x, y;

    Point(int x_, int y_)
    {
        x = x_;
        y = y_;
    }

    void input()
    {
        cin >> x >> y;
    }
};

int main()
{
    Point t1(0, 0);
    t1.input();
    cout << &t1.x << " " << &t1.y << " " << &t1;

    return 0;
}