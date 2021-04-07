//b.
for (int* cp = a; (*cp) != '\0'; cp++) {
	cout << (void*)cp << " : " << (*cp) << endl;
}
//c.
int a[3] = { 1,2,3 };
for (int* cp = a; abs(*cp) <= 3; cp++) {
	cout << (void*)cp << " : " << (*cp) << endl;
}
//d.
double a[3] = { 1,2,3 };
for (double* cp = a; abs(*cp) <= 3; cp++) {
	cout << (void*)cp << " : " << (*cp) << endl;
}