#include<bits/stdc++.h>

using namespace std;


int main(){
   int n, k;
   cin >> n >> k;

   int arr[n];
   for (int i=0; i<n; i++) {
       cin >> arr[i];
   }


   long long sum =0,mini=INT_MAX;
   for (int i =0; i< n; i++) {
       if (arr[i]<0  && k>0) {
           arr[i] *=-1;
           k--;
       }
       sum += arr[i];
       if (arr[i] < mini) mini=arr[i];
   }


    if(k%2==1)
        sum-=(2*mini);
    cout<<sum;

    return 0;
}