#include <iostream>
#include <string>

using namespace std;

bool palind(string s)
{
	string s1 = s;
	reverse(s.begin(), s.end());
	if (s1 == s) return true;
	return false;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		int k = 0;
		cin >> a >> b;

		for (int i = a; i <= b; i++)
		{
			if (palind(to_string(i))) k++;
		}
		cout << k << endl;
	}
	return 0;
}