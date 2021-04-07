#include <iostream>

using namespace std;

string Divisibility(int a, int b)
{
	if (a % 7 == 0 && b % 7 == 0) return "true";
	else return "false";
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << Divisibility(a, b);
	return 0;

}