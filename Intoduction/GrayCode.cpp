#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long n ;
    cin >> n;
    for(int i=0 ; i < 1<<n ; i++){
        int value = (i^(i>>1)); //calculates the gray code for the current i
        bitset<32> r(value) ; // stores the gray code as binary number
        string s = r.to_string();//converts binary to string
        cout<<s.substr(32-n)<<"\n";//print only the string of size n
    }
    return 0 ;
}