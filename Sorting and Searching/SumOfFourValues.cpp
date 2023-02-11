//Code needs Optimization - TLE Error
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n , x ;
    cin >> n >> x ;
    vector<pair<int,int>>a(n) ;
    for(int i = 0 ; i<n ; i++){
        cin >> a[i].first; //input number is stored
        a[i].second = i+1; //position of each number stored
    }
    if(n<3){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    sort(a.begin(),a.end());
    for(int f= 0 ; f < n ; f++){
        for(int k = f+1 ; k<n ; k++){
            int current = a[f].first+a[k].first;
            int temp = x-current;
            int i = 0 , j = n-1 ;
            while(i<j){
                if(i==k || i==f) ++i;
                if(j==k || j==f) --j;
                if(i>j) break;
                if(a[i].first + a[j].first == temp){
                    cout<<a[i].second<<" "<<a[j].second<<" "<<a[f].second<<" "<<a[k].second;
                    return 0;
                }
                if(a[i].first + a[j].first >temp) --j;
                else ++i;
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}