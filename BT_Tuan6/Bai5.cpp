long fibo(int n)
{
    if (n == 1 || n == 2) return 1;
    else {
        int f0 = 1;
        int f1 = 1;
        int fn = 0;
        for (int i = 3; i <= n; i++)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        return fn;
    }
    return 1;
}