#include <iostream>

using namespace std;

string concat(const char* s1, const char* s2)
{
	string ss1 = s1;
	string ss2 = s2;
	string s = ss1 + ss2;
	return s;
}

int main()
{
	cout << concat("Hello", "World");
	return 0;
}