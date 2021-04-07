#include <iostream>

using namespace std;

int main()
{
	cout << "12 midnight" << endl;
	int i = 1;
	for (;i <= 11; i++) cout << i << "am" << endl;
	cout << "12 noon" << endl;
	i = 1;
	for (;i <= 11; i++) cout << i << "pm" << endl;
	return 0;
}