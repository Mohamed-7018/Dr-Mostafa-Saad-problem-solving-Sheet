#include <bits/stdc++.h>

using namespace std;
#define ll  long long
#define ld  long double
#define mk  make_pair
#define vi  vector<int>
#define vs  vector<string>
#define vp  vector<pair<string, string>>
#define all(v) v.begin(),v.end()
#define vl  vector<long long>
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define si  set<int>
#define pii pair<int, int>
#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>
#define sz(s)    (int)(s.size())


using namespace std;


void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

int arr[100001];
int main() {
    begin();

    int n;
    cin >>  n;
    int current =n;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        arr[x]=1;
        
        if (x== current) {
            for(int i=current ;	i>0	;	i--	){
                if(arr[i]){
                    cout<<i<<" ";
                    arr[i]=0	;
                    current =i-1;
                }
                else {
                    break;
                }

            }
        }
        cout<<endl;
    }
    return 0;

}





// g++ -o hello hello.cpp
// ./hello