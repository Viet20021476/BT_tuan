#include <iostream>

using namespace std;

string LeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return "true";
	else return "false";
}

int main()
{
	int y;
	cin >> y;
	cout << LeapYear(y);

}