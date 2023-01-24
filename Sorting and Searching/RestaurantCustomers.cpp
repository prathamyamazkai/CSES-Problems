#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n , a , b;
    cin >> n ;
    vector<pair<int,int>>v ;

    while(n--){
        cin >> a >> b ;
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    int ans = 0 , sum = 0 ;
    sort(v.begin(),v.end());
    for(auto x : v){
        sum += x.second;
        ans = max(ans,sum);
    }
    cout<<ans<<"\n";
    return 0;
}