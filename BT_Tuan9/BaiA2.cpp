int* p = new int;
int* p2 = p;
*p = 10;
delete p; // con trỏ p2 trỏ đến vùng bộ nhớ đã bị thu hồi
*p2 = 100;
cout << *p2;
delete p2;