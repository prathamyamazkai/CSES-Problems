#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long n , sum;
    cin >> n >> sum;
    vector<long long>v(n) ;
    for(int i = 0 ; i < n ; i++ ){
        cin>>v[i];
    }
    long long curr_sum=0 , cnt=0 ;
    map<long long , long long>mp;
    for(int i=0 ; i<n ; i++){
        curr_sum+=v[i];
        if(curr_sum==sum) cnt++;
        if(mp.count(curr_sum-sum)) cnt+=mp[curr_sum-sum];
        mp[curr_sum]++;
    }
    cout<<cnt<<"\n";
    return 0;
}