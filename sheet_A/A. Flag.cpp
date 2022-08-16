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
    int n,m;
    cin >> n >> m;
    vector<char> set;

    char arr[n][m];
    bool flag = true;



    for  (int i=0; i < n; i++) {
        for (int j=0; j<m; j++) {
            cin >> arr[i][j] ;
        }
        char ref = arr[i][0];
        flag = true;
        for (int j=0; j<m; j++) {
            if (arr[i][j] != ref)    {
                flag = false;
                break;
            }
        }
        if (!flag ) break;
        else {
            set.push_back(ref);
        }
    }


    if (!flag ) {
        cout << "NO";
        return  0;
    }



    for ( int  i=0 ; i< n - 2; i++ ) {
//        cout << set[i] << endl;
        if (set[i] == set[i-1]  || set[i] == set[i+1]){
            cout << "NO" ;
            return  0;
        }
        else {

        }

    }
    cout << "YES";
//    else {
//        if (set.size() > n-1) cout << "YES";
//        else cout << "NO";
//    }
    return 0;
}

