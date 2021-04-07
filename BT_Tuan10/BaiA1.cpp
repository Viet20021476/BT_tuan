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
    void print()
    {
        cout << '(' << x << ',' << y << ')';
    }
};

int main()
{
    Point t = Point(0, 0);
    t.input();
    t.print();

    return 0;
}