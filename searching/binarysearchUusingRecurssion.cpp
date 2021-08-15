#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int t)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        // cout << "mid"
        //      << " " << mid << endl;
        if (arr[mid] == t)
            return mid;
        if (arr[mid] < t)
            return binarySearch(arr, mid + 1, r, t);
        else
            return binarySearch(arr, l + 1, mid - 1, t);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int t;
    cin >> t;
    int res = binarySearch(arr, 0, n - 1, t);
    (res == -1) ? cout << "no element" << -1 : cout << res;
}