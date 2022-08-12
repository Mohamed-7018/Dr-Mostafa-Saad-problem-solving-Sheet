#include<bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    cin >> n >> m;


    int deb[105] = {0},ow[105] ={0},sum=0;

    int a,b,c;
    for (int i=0; i < m; i++) {
        cin >> a>>b>>c;

        deb [b] += c;
        ow  [a] += c;
    }

    for (int i=1; i<=n; i++) {
        if (deb [i] < ow [i])
            sum += ow[i] - deb [i] ;
    }

    cout<<sum;

}