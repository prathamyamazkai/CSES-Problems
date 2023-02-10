#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n , a , sum = 0 , ma = INT_MIN;   //ma : max reading time 
    cin >> n;

    for(int i=0 ; i<n ; i++){
        cin >> a ;
        sum+= a;
        ma = max(a,ma);
    }
    cout << (ma>(sum-ma)?2*ma:sum)<<"\n"; // if max reading time > sum of all reading time - max reading time
    return 0;                            // Then ans = 2*max reading time else sum of all reading time
}