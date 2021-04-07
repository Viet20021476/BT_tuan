#include <iostream>

using namespace std;

int count(string a, string b)
{
	int count = 0;
	int lena = a.length();
	int lenb = b.length();

	for (int i = 0; i <= lenb - lena; i++)
	{
		if (b[i] == a[0])
		{
			for (int j = 0; j < lena; j++)
			{
				if (b[i + j] != a[j]) break;
				if (j == lena - 1) count++;
			}
		}
	}
	return count;
}

int main()
{
	string a, b;
	cin >> a >> b;
	cout << count(a, b);
	return 0;
}