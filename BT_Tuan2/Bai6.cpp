#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 1;
	int count = 1;
	while (count <= n)
	{
		int t = 1;
		int k = count;
		while (k <= n)
		{

			cout << k << " ";
			k++;
			t++;
		}
		int i = 1;
		while (t <= n)
		{

			cout << i << " ";
			i++;
			t++;
		}
		cout << endl;
		count++;
	}
	return 0;
}