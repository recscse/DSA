#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int p, int q, int r)

{
    int n1 = q - p + 1;
    int n2 = r - q;
    cout << n1 << ' ' << n2 << endl;
    int l[n1];
    for (int i = 1; i <= n1; i++)
    {
        l[i] = arr[p + i - 1];
    }
    cout << endl;
    int rt[n2];
    for (int j = 1; j <= n2; j++)
    {
        rt[j] = arr[q + j];
    }
    l[n1 + 1] = INT_MAX;
    rt[n2 + 1] = INT_MAX;

    int m = 1;
    int n = 1;
    for (int k = p; k < r; k++)
    {
        if (l[m] <= rt[n])
        {
            arr[k] = l[m];
            m = m + 1;
        }
        else
        {
            arr[k] = rt[n];
            n = n + 1;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q = (0 + n - 1) / 2;
    int r = n - 1;
    merge(arr, 0, q, r);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}