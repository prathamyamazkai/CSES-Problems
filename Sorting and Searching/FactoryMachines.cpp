//working on error..........
#include<bits/stdc++.h> 
using namespace std ;

long long  n , t ;
long long ar[1e9];
bool check(long long p){
    long long sum=0;
    for(int i = 0 ; i<n ; i++){
        sum+=min(p/ar[i],(long long)1e9);
    }
    return sum>=t;
}

int main(){

    cin >> n >> t ;
    for(int i = 0 ; i < n ; i++){
        cin>>ar[i];
    }
    long long low = 0 , high = 1e18 , mid;
    while (low<high){
        mid = low/2 + high/2;
        if(check(mid)){
            high = mid;
        }
        else low = mid+1;
    }
    cout<<low<<"\n";
    return 0;
}