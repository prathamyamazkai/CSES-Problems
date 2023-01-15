#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n;
    vector<int> weight(n);
    for(int i=0 ; i<n ; i++) cin>>weight[i];
    long long ans = 1e18;
    for(int mask = 0 ; mask < (1<<n) ; mask++){
        long long sumA = 0 ; // mask turned on
        long long sumB = 0 ; // mask turned off
        for(int position = 0 ; position < n ; position++){
            if(mask&(1<<position)) sumA+= weight[position];
            else sumB+= weight[position];
        }
        ans = min(ans,abs(sumA-sumB));
    }
    cout<<ans<<"\n";
    
    return 0;
}