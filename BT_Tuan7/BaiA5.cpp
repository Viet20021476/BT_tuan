#include <iostream>

using namespace std;

char* weird_string() {
	char c[] = "12345";
	return c;
}

int main()
{
	weird_string();
	return 0;
}