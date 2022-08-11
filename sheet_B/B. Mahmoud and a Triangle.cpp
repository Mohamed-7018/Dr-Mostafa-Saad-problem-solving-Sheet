#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;




#include <bits/stdc++.h>
using namespace std;

// Method prints possible triangle when array values are
// taken as sides
bool isPossibleTriangle(int arr[], int N)
{
    if (N < 3)
        return false;

    sort(arr, arr + N);

    for (int i = 0; i < N - 2; i++)
        if (arr[i] + arr[i + 1] > arr[i + 2]) return true;
    return false;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int N = sizeof(arr) / sizeof(int);

    isPossibleTriangle(arr, N) ? cout << "Yes" : cout << "No";
    return 0;
}
