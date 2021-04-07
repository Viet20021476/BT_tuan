int detobi(int n)
{
	long sum = 0;
	long sodu, i = 1;

	while (n > 0)
	{
		sodu = n % 2;
		sum += i * sodu;
		n /= 2;
		i *= 10;
	}
	return sum;
}