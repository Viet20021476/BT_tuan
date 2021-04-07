#include <iostream>

using namespace std;

int n;
bool a[100];

void print()
{
    for (int i = 0; i < n; i++)
        if (a[i]) cout << i + 1 << " ";
    cout << endl;
}

void TH(int u)
{
    if (u == n)
    {
        print();
        return;
    }
    a[u] = true;
    TH(u + 1);

    a[u] = false;
    TH(u + 1);

}

int main()
{
    cin >> n;
    TH(0);
    return 0;
}
