#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool isThereZeros = false;
    long long count = 1;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) isThereZeros = true;
    }


    if (!isThereZeros ){
        cout << 0;
        return 0;
    }


    for (int i = 0; i < n; i++)
        if (arr[i] == 1)
            for (int j = i + 1; j < n; j++)
                if (arr[j] == 1) {
                    count = count * (j - i);
                    break;
                }

    cout << count;
    return 0;

}