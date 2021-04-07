#include <iostream>
#include <string>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	string a[100][100];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int k = 0;
			if (a[i][j] != "*")
			{
				if (a[i - 1][j - 1] == "*") k++;
				if (a[i - 1][j] == "*") k++;
				if (a[i - 1][j + 1] == "*") k++;
				if (a[i][j - 1] == "*") k++;
				if (a[i][j + 1] == "*") k++;
				if (a[i + 1][j - 1] == "*") k++;
				if (a[i + 1][j] == "*") k++;
				if (a[i + 1][j + 1] == "*") k++;
				a[i][j] = to_string(k);
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}