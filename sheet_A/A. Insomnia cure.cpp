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

int main() {
    begin();


    int k, //got punched in the face with a frying pan
    l, //got his tail shut into the balcony door
    m, //got his paws trampled with sharp heels
    n,//threatened
    d;
    cin >> k>>l>>m>>n>>d;

int ans =0;
map<int,bool> damagedDragons;
//got punched in the face with a frying pan
for (int i=k - 1; i< d;i+=k) damagedDragons[i] = true;

//got his tail shut into the balcony door
for (int i=l -1 ;i<d;i+=l) damagedDragons[i] = true;


//got his paws trampled with sharp heels
for (int i=m -1 ;i<d;i+=m) damagedDragons[i] = true;


//threatened
for (int i=n -1 ;i<d;i+=n) damagedDragons[i] = true;

cout <<sz(damagedDragons);


    return 0;

}





// g++ -o hello hello.cpp
// ./hello