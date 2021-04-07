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

    Point mid_point(Point t1, Point t2)
    {
        Point tm(0, 0);
        tm.x = (t1.x + t2.x) / 2;
        tm.y = (t1.y + t2.y) / 2;
        return tm;

    }
};

int main()
{
    Point t1(0, 0);
    Point t2(0, 0);
    t1.input();
    t2.input();
    Point t3 = t3.mid_point(t1, t2);
    t3.print();

    return 0;
}
