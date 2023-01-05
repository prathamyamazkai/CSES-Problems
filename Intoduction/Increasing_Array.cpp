#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long int n ;
    cin >> n ;
    long long int a[n];
    for(int i = 0 ; i<n ; i++) cin >> a[i] ;

    long long int total = 0 , greater = a[0] ;

    for(int i =1 ; i<n ; i++){
        total += max(0LL , greater-a[i]); //if previous element is greater than current number , differnce = count of 1 to be added
        greater = max(greater,a[i]);  // update greater element if current num is bigger than previous
    }
    cout << total ;
    return 0;
}