#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m ;

    char arr [n][m];

    for (int i=0; i <n; i++) {
        for (int j=0; j<m; j++) {
            cin >> arr [i][j];
        }
    }


    for (int i=0; i< n; i++) {
        bool isDwarf = false;
        for (int j=0; j<m; j++) {
            if(arr[i][j]=='S'&& !isDwarf)
            {
                cout<<-1<<endl;
                return 0;
            }
            else if(arr[i][j]=='G') isDwarf= true;
        }
    }

    set<int>s;
    int c,d;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr [i][j]=='S') c=j;
            else if(arr[i][j]=='G') d=j;
        }
        s.insert(c-d);
    }

    cout<<s.size();
    return 0;
}