void swap_pointers(char*& x, char*& y)
{
	char* t;
	char** tmp = &t;
	*tmp = x;
	x = y;
	y = *tmp;
}