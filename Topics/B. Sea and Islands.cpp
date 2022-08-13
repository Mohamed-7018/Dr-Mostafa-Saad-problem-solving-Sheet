#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c=0;
    char a[102][102];
    cin>>n>>k;

    for(int i=0;i<n;i++) {
        for (int j = 0; j < n; j++)
            a[i][j] = 'S';
    }


    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j+=2) 
                if(k>0)  a[i][j]='L',k--;
        }
        
        
        else{
            for(int j=1;j<n;j+=2)
                if(k>0)
                    a[i][j]='L',k--;
        }
    }
    
    
    if(k>0)
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<a[i][j];
            cout<<endl;
        }
    }
    return 0;
}