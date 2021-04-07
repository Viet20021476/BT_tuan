#include <iostream>

using namespace std;

int f(int* a, int n, int x)
{
	int middle = n / 2;
	if (x == *(a + middle)) return middle;
	else if (x > *(a + middle))
		for (int i = middle + 1; i < n; i++) {
			if (x == *(a + i)) return i;
		}
	else {
		for (int i = middle - 1; i >= 0; i--) {
			if (x == *(a + i)) return i;
		}
	}
	return -1;
}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int x;
	cin >> x;
	cout << f(a, 5, x);
	return 0;
}