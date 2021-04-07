#include <iostream>

using namespace std;

void hoanvi(string& s)
{
    while (true)
    {
        int k = 0;
        int l = 0;
        for (k = s.length() - 2; k >= 0; k--) if (s[k] < s[k + 1]) break;
        if (k < 0) break;
        for (l = s.length() - 1; l > k; l--) if (s[k] < s[l]) break;
        swap(s[k], s[l]);
        for (int i = k + 1, j = s.length() - 1; i < j; i++, j--) swap(s[i], s[j]);
        cout << s << '\n';
    }
}

int main()
{
    string s;
    cin >> s;
    hoanvi(s);

    return 0;
}