#include <iostream>
#include <cstring>

using namespace std;

struct String
{
    int n;
    char* str = new char[n];

    String(const char* s)
    {
        n = strlen(s);
        for (int i = 0; i < n; i++)
        {
            str[i] = s[i];
        }
    }

    ~String()
    {
        delete[] str;
    }

    void print()
    {
        cout << str;
    }

    void append(const char* s1)
    {
        const int length = strlen(s1);

        char* temp = new char[n + length];

        for (int i = 0; i < n; i++)
        {
            temp[i] = str[i];
        }

        for (int i = 0; i < length; i++)
        {
            temp[n + i] = s1[i];
        }
        str = temp;
    }

};

int main()
{
    String greeting("Hi");
    greeting.append(" there");
    greeting.print();

    return 0;
}