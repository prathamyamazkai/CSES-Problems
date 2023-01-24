#include <bits/stdc++.h>
using namespace std ;

//sorting in ascending order based on second element of pairs
bool asc_sec(const pair<int,int> &a , const pair<int,int> &b){
    return (a.second < b.second);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n , a , b;
    cin >> n ;
    int movies = n ;
    vector<pair<int,int>>v ;

    while(n--){
        cin >> a >> b ;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),asc_sec);
    int ans = 0 , i = 0 , temp = 0 ;
    while(i<movies){
        if(temp<=v[i].first){
            temp = v[i].second ;
            i++;
            ans++;
        }
        else i++ ;
    }
    cout<<ans<<"\n";
    
    return 0;
}