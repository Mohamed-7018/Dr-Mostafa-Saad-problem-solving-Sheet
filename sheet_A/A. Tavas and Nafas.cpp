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
#define sz(s)    (ll)(s.size())


using namespace std;


void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}


void printFirstNumber ( int n) {
    if (n == 1) cout << "one";
    else if (n == 2) cout << "two";
    else if (n==3) cout << "three";
    else if (n==4) cout <<"four";
    else if (n==5) cout << "five";
    else if (n==6) cout << "six";
    else if (n==7) cout << "seven";
    else if (n==8) cout << "eight";
    else if (n==9) cout << "nine";
    else if (n==0) cout << "zero";
    else if (n==10) cout << "ten";
    else if (n==11) cout << "eleven";
    else if (n==12) cout << "twelve";
    else if (n==13) cout << "thirteen";
    else if (n==14) cout << "fourteen";
    else if (n==15) cout << "fifteen";
    else if (n==16) cout << "sixteen";
    else if (n==17) cout << "seventeen";
    else if (n==18) cout << "eighteen";
    else if (n==19) cout << "nineteen";
    else if (n==20) cout << "twenty";
}
void printSecondNumber ( int n) {
    if (n == 2) cout << "twenty";
    else if (n==3) cout << "thirty";
    else if (n==4) cout <<"forty";
    else if (n==5) cout << "fifty";
    else if (n==6) cout << "sixty";
    else if (n==7) cout << "seventy";
    else if (n==8) cout << "eighty";
    else if (n==9) cout << "ninety";

}


int main() {
    begin();

    int n;
    cin >> n;

    if (n <=20 ) {
        printFirstNumber(n);
    }
    else {
            int x =n%10;

        printSecondNumber(n/10);
        if (x == 0) return 0;
        else {
            cout << "-";
            printFirstNumber(x);
        }


    }


    return 0;


}





// g++ -o hello hello.cpp
// ./hello