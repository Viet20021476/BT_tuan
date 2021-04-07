int findGCD(int a, int b)
{
	int GCD = 0;
	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			if (a % i == 0 && b % i == 0) GCD = i;
		}
		return GCD;
	}

	if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0) GCD = i;
		}
		return GCD;
	}
	if (a == b) return a;
	return 1;
}