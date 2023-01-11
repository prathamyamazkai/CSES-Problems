#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int zeroes = 0 ;
    while(n){
        n/=5 ;
        zeroes += n ;
    }
    cout<<zeroes<<"\n";
    return 0;
}