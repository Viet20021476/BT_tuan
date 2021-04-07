//a.
string reverse(const char* a)
{
	string b = a;

	for (int i = 0; i < strlen(a); i++)
	{
		b[i] = *(a + strlen(a) - i - 1);
	}
	return b;
}

//b.
void delete_one(const char a[], int pos)
{
	int length = strlen(a);
	for (int i = pos; i <= length - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
}

void delete_char(const char a[], char c)
{
	for (int i = 0; i < strlen(a); i++)
	{
		if (*(a + i) == c)
		{
			delete_one(a, i);
			i = -1;
		}
	}
}

//c.
void pad_right(const char a[], int n)
{
	int length = strlen(a);
	while (length <= n)
	{
		a[length] = ' ';
		length++;
	}
}

//d.
void pad_left(const char a[], int n)
{
	int length = strlen(a);
	int i = 0;
	while (length <= n)
	{
		a[i] = ' ';
		i++;
		length++;
	}
}

//e.
void delete_one(const char a[], int pos)
{
	int length = strlen(a);
	for (int i = pos; i <= length - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
}

void truncate(const char a[], int n)
{
	int length = strlen(a);
	while (length >= n)
	{
		delete_one(a, length);
		length--;
	}
}

//g.
delete_one(const char a[], int pos)
{
	int length = strlen(a);
	for (int i = pos; i <= length - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
}

void trim_left(const char a[])
{
	for (int i = 0; i < strlen(a); i++)
	{
		if (*(a + i) == ' ')
		{
			delete_one(a, i);;
			i = -1;
		}
	}
}

//h.
void delete_one(const char a[], int pos)
{
	int length = strlen(a);
	for (int i = pos; i <= length - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
}

void trim_right(const char a[])
{
	for (int i = 0; i < strlen(a); i++)
	{
		if (*(a + i) == ' ')
		{
			delete_one(a, i);;
			i = -1;
		}
	}
}