#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string s1 = s;
	reverse(s.begin(), s.end());
	if (s1 == s) cout << "YES";
	else cout << "NO";

	return 0;
}