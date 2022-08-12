#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m;
    cin >> n>>m;

    int w=0;
    while (n!=m){
        if (m > n){
            if (m % 2 == 0) m /= 2, w++;
            else m++, w++;
        }

        else if (n > m) {
            m++;
            w++;
        }
    }

    cout <<w;
    return  0;
}