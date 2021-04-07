double round(double n)
{
	int x = (int)n;
	if (n - x < 0.5) n = x;
	else n = x + 1;
	return n;
}