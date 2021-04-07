string balancedSums(vector<int> arr) {
    int st = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        st += arr[i];
    }
    int s1 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s1 == st - s1 - arr[i]) return "YES";
        s1 = s1 + arr[i];
    }

    return "NO";

}