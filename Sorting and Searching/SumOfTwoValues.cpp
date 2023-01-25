#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n , x ;
    cin >> n >> x ;
    int input ;
    vector<pair<int,int>>v;
    for(int i=0 ; i < n ; i++){
        cin>>input;
        v.push_back({input,i});
    }
    sort(v.begin(),v.end());
    int i = 0 , j = n-1 ;
    while(i<j){
        if(v[i].first+v[j].first>x) j--;
        else if(v[i].first+v[j].first<x) i++;
        else{
            cout<<v[i].second+1 << " " <<v[j].second+1<<"\n";
            return 0;
        }
    }
    cout<<"IMPOSSIBLE"<<"\n";
}