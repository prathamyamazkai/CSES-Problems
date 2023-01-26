#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n , ans = 1;
    cin>>n;

    vector<int>v(n),b(n);

    for(int &x : v) cin >> x , x-- ; //The x-- subs 1 from i/p making it 0-indexed , o/p will i/p that are unique and non-decreasing
    for(int i = 0 ; i < n ; i++) b[v[i]]=i;//b stores the index of each elemnt of v
    for(int i = 1 ; i < n ; i++) ans+=b[i]<b[i-1];
    cout << ans ;

    return 0;
}