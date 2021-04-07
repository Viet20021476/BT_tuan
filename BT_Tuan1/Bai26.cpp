#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	double s = 0;
	double Mean = 0;
	cin >> n;
	double a[100];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		s += a[i];
	}
	Mean = s / n;
	double Max = a[0], Min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > Max) Max = a[i];
		if (a[i] < Min) Min = a[i];
	}
	cout << "Mean: " << Mean << endl;
	cout << "Max: " << Max << endl;
	cout << "Min: " << Min << endl;
	return 0;
}