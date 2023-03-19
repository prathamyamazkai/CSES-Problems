#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long n , sum = 0 , res = 0;
    cin >> n ;
    vector<long long>v(n) , mod(n,0);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
        sum+=v[i];
        mod[((sum%n)+n)%n]++; // modulo twice because remainder can be -ve
    }
    for(int i = 0 ; i<n ; i++){
        if(mod[i]>1) res += (mod[i]*(mod[i]-1)/2);
    }
    res+=mod[0];
    cout<<res<<"\n";
}