#include <bits/stdc++.h>
int firstMissing(int arr[], int n)
{
    // Write your code here.
    sort(arr, arr + n);
    if (arr[n - 1] <= -1)
    {
        return 1;
    }
    else
    {
        int i = 0, k = 1;
        while (i < n)
        {
            if (arr[i] > 0)
            {
                if (k != arr[i])
                {
                    return k;
                }
                k++;
            }
            i++;
        }
        return arr[n - 1] + 1;
    }
}