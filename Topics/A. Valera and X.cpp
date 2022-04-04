#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
 
int main()
{
    int n, i, j, flg = 0;
    char takex[300][300];
    char x, y;
 
    cin >> n;
 
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> takex[i][j];
        }
    }
 
    x = takex[n/2][n/2];
    y = takex[0][1];
 
    for(i = 0; i < n; i++){
        if(takex[i][i] != x || takex[i][n-(i+1)] != x || takex[i][i] == y || takex[i][n-(i+1)] == y  ){
                flg = 1;
                break;
        }
        for(j = 0; j < n; j++){
            if(i != j && j != (n - (i + 1)))
            {
                if(takex[i][j] != y){
                    flg = 1;
                    break;
                }
            }
        }
    }
 
    if(flg == 0) printf("YES\n");
    else printf("NO\n");
 
    return 0;
}