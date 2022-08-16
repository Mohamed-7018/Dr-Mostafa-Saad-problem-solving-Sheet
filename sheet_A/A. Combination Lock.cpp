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
    int n,sum = 0;
    cin >> n;
    string s1, s2;
    cin>>s1>>s2;
    for (int i = 0 ; i < n; i++){
        int x,y,x1,y1;
        x = s1[i] - '0';
        y = s2[i] - '0';
        if (x > 5 )
            x1  = 10 - x;
        else
            x1 = x - 0;
        if (y > 5 )
            y1  = 10 - y;
        else
            y1 = y - 0;

        if (abs(x - y) > x1 + y1)
            sum += x1 + y1;
        else
            sum += abs(x - y);


    }
    cout<<sum;

    return 0;
}

//This code is contributed by rathbhupendra
