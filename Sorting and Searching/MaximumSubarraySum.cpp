#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n , a ;
    cin >> n ;

    vector<long long int>v;

    for(int i=0 ; i< n ; i++){
        cin >> a ;
        v.push_back(a);
    }

    long long int best = -9e18 , sum = 0;
    
    for(int i = 0 ; i<n ; i++){
        sum = max(v[i],sum+v[i]);
        best = max(sum,best);
    }
    cout<<best<<"\n";

    return 0;
}