//a.
int strlen(char a[])
{
	int len = 0;
	while (a[len] != '\0') len++;
	return len;
}

string reverse(char* a)
{
	string b = a;

	for (int i = 0; i < strlen(a); i++)
	{
		b[i] = *(a + strlen(a) - i - 1);
	}
	return b;
}

//b.
int strlen(char a[])
{
	int len = 0;
	while (a[len] != '\0') len++;
	return len;
}

void delete_one(char a[], int pos)
{
	int length = strlen(a);
	for (int i = pos; i <= length - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
}

void delete_char(char a[], char c)
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
int strlen(char a[])
{
	int len = 0;
	while (a[len] != '\0') len++;
	return len;
}

void pad_right(char a[], int n)
{
	int length = strlen(a);
	while (length <= n)
	{
		a[length] = ' ';
		length++;
	}
}

//d.
void pad_left(char a[], int n)
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
int strlen(char a[])
{
	int len = 0;
	while (a[len] != '\0') len++;
	return len;
}

void delete_one(char a[], int pos)
{
	int length = strlen(a);
	for (int i = pos; i <= length - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
}

void truncate(char a[], int n)
{
	int length = strlen(a);
	while (length >= n)
	{
		delete_one(a, length);
		length--;
	}
}

//f.
int strlen(char a[])
{
	int len = 0;
	while (a[len] != '\0') len++;
	return len;
}

bool is_palindrome(char a[])
{
	for (int i = 0; i < strlen(a) / 2; i++)
	{
		if (*(a + i) != *(a + strlen(a) - i - 1)) return false;
	}
	return true;
}

//g.
int strlen(char a[])
{
	int len = 0;
	while (a[len] != '\0') len++;
	return len;
}

void delete_one(char a[], int pos)
{
	int length = strlen(a);
	for (int i = pos; i <= length - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
}

void trim_left(char a[])
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
int strlen(char a[])
{
	int len = 0;
	while (a[len] != '\0') len++;
	return len;
}

void delete_one(char a[], int pos)
{
	int length = strlen(a);
	for (int i = pos; i <= length - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
}

void trim_right(char a[])
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