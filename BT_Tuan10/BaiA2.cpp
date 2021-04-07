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
};

void print(Point& t)
{
    cout << &t;
}

int main()
{
    Point t = Point(4, 5);
    print(t);

    return 0;
}