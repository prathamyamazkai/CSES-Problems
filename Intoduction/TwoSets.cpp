#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n;
    int sum = n*(n+1)/2 ;
    int a[n+1] ;
    a[0] = 0;
    for(int i=1 ; i<n+1 ; i++){
        a[i] = i ;
    }
    string ans = "";
    vector<int> v1 , v2 ;
    if(sum%2==0){
        if(n%4==0){
            ans = "YES";
            for(int i = 1 ; i <= n/4 ; i++) v1.push_back(i); //first 4 numbers 
            for(int i = 0 ; i < n/4 ; i++) v1.push_back(a[n-i]);//last 4 numbers
            for(int i = n/4 + 1 ; i<v1[v1.size()-1] ; i++) v2.push_back(i);//remaining numbers in set 2
        }
        else if (n%4==3){
            vector<int> v;
            ans ="YES";
            for(int i = 4 ; i<n+1 ; i++) v.push_back(i);
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
            for (int i = 0; i < (n-3)/4 ; i++){
                v1.push_back(v[i]);
                v1.push_back(v[v.size()-1-i]);
            }
            for (int i = 4 + (n-3)/4 ; i <= n-(n-3)/4; i++) v2.push_back(i);

        }
        else ans = "NO";
    }
    else ans = "NO";
    if(ans == "YES"){
        cout<<ans<<"\n";
        cout<<v1.size()<<"\n";
        for(auto x : v1) cout << x <<" ";
        cout<<"\n";
        cout<<v2.size()<<"\n";
        for(auto y : v2) cout << y << " ";
    }
    else cout << ans ;
    return 0 ;   
     
}