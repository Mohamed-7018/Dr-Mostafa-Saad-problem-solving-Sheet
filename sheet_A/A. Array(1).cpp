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
#define ss  set<string>
#define si  set<int>
#define pii pair<int, int>
#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>


void begin () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

ll sum (ll num) {
    return (num*(num+1))/2;
}

int main()
{
    begin();

    int n;
    ll element;
    cin >> n;
    vi a, b, c;
    for (int i = 0; i < n; i++){
        cin >> element;
        if (element == 0)       c.push_back(element);
        else if (element < 0)   a.push_back(element);
        else                    b.push_back(element);
    }

    if (a.size() >= 3){
        if (a.size() % 2 == 0){
            c.push_back(a[0]);  a.erase(a.begin());
            b.push_back(a[0]);  a.erase(a.begin());
            b.push_back(a[0]);  a.erase(a.begin());
        }else{
            b.push_back(a[0]);  a.erase(a.begin());
            b.push_back(a[0]);  a.erase(a.begin());
        }
    }else if (a.size() == 2){
        c.push_back(a[0]);  a.erase(a.begin());
    }



    cout << a.size() << " ";
    for (auto i : a){
        cout << i << " ";
    }
    cout << endl;
    cout << b.size() << " ";
    for (auto i : b){
        cout << i << " ";
    }
    cout << endl;
    cout << c.size() << " ";
    for (auto i : c){
        cout << i << " ";
    }

    return 0;
}


// g++ -o hello hello.cpp
// ./hello