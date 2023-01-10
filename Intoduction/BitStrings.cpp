#include <bits/stdc++.h>
using namespace std ;
const long long mod = 1e9+7 ;

long long binpow(int n){
    long long res = 1;
    long long a = 2;
    while(n>0){
        if(n&1) res = (res * a) % mod ;
        a =  ( a * a ) % mod ;
        n = n >> 1 ;
    } 
    return res ;
}

int main(){
    long long int n ;
    cin >> n ;
    cout<<binpow(n)<<"\n";
    return 0;
}