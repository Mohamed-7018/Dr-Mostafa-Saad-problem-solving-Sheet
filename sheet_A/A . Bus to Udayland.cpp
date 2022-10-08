
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
// C++ program to Delete a Tree

using namespace std;

/* Driver code*/
int main()
{
    int n;
    cin >> n;
    char a[n][5];
    for(int i = 0; i < n; i++){
        for (int j = 0; j < 5; j++){
            cin >> a[i][j];
        }
    }
    bool flag = false;
    for(int i = 0; i < n; i++){
        for (int j = 1; j < 5; j++){
            if (a[i][j] == 'O' && a[i][j] == a[i][j - 1]){
                cout << "YES" << endl;
                a[i][j] = '+';
                a[i][j - 1] = '+';
                flag = true;
                break;
            }
        }
        if (flag)   break;
    }

    if (flag)
        for(int i = 0; i < n; i++){
        for (int j = 0; j < 5; j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    else cout << "NO";


    return 0;
}

//This code is contributed by rathbhupendra
