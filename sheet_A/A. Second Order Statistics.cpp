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
    cin >>n;

    set <int> set;
    for (int i=0; i<n; i++) {
        int x;
        cin >>x;

        set.insert(x);
    }


    if (set.size() < 2) cout << "NO";
    else {
        auto it = set.begin();
        it ++ ;
        cout << *it;
    }
    return 0;
}

//This code is contributed by rathbhupendra
