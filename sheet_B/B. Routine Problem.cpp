#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin >>a>>b>>c>>d;


    int x1=a*d-c*b;
    int x2=c*b-a*d;

    if (x1 > 0) cout<<x1/__gcd(x1,a*d)<<"/"<<a*d/__gcd(x1,a*d);
    else cout<<x2/__gcd(x2,c*b)<<"/"<<c*b/__gcd(x2,c*b);

    return 0;
}