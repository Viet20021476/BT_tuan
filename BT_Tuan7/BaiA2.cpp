#include <iostream>

using namespace std;

int f(int a[])
{
	return sizeof(a);
}

int main()
{
	int a[5];
	cout << sizeof(a) << endl;
	cout << f(a);
	return 0;
}