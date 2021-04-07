int test(int n)
{
    int a[5000];
    int k = 5000;
    a[0] = 5;
    int count = 0;
    if (n == 1) return 1;
    else
    {
        return test(n - 1) + a[k];
        k--;
        count++;
    }
}