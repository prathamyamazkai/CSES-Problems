#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , x ;
    cin >> n >> x ;
    int weight , ans=0 ;
    vector<int>weights;
    
    for(int i = 0 ; i<n ; i++){
        cin >> weight ;
        weights.push_back(weight);
    }

    sort(weights.begin() , weights.end());

    int l = 0;

    for(int r = n-1 ; r>=l ; r--){
        if(weights[l]+weights[r]<=x) l++;
        ans++;
    }

    cout<< ans << "\n";

    return 0;
}

/* 2 3 7 9
=>1St Iteration
l=0 r=3    (4-1)
2+9 <10 false
ans = 1
=>2nd Iteration
r-- (2)
2+7 < 10 True
l++ l=1
ans = 2
=>3rd Iteration 
r-- r(1) 
3+3 < 10
ans = 3
 */