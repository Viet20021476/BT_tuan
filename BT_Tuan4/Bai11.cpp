#include<iostream>

using namespace std;

string stringrev(string& s)
{
    size_t n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
    }
    return s;
}

bool checkstrrev(string s1, string s2)
{
    string s3 = stringrev(s2);
    if (s1 == s3) return true;
    else return false;
}

int main()
{
    int n;
    cin >> n;
    string s[100];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].length() % 2 != 0 && s[i].length() == s[j].length() && checkstrrev(s[i], s[j]) == true) {
                cout << s[i].length() << " " << s[i][s[i].length() / 2];
                break;
            }
        }
    }
    return 0;
}