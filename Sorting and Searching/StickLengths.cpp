#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int n , p ;
    cin >> n ;

    vector<long long int>v;

    for(int i=0 ; i< n ; i++){
        cin >> p ;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    long long int mid = v[n/2] , ans = 0;
    for(auto x : v) ans+=abs(x-mid);
    cout<<ans<<"\n";

    return 0;
}