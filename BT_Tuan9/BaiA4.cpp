#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int* p = &x;
	delete p; // lỗi invalid pointer

	return 0;
}