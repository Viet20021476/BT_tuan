#include <iostream>

using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void xoa1pt(int a[], int& n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

int main()
{
    int a[200];
    int b[200];
    int c[1];
    int n;
    cin >> n;
    nhap(a, n);
    int k = n + 1;
    nhap(b, k);

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] != a[j] && j == n - 1)
            {
                c[0] = b[i];
            }
            else if (b[i] != a[j]) continue;
            else if (b[i] == a[j]) break;

        }
    }
    cout << c[0];
    //xuat(b, k);
    return 0;
}