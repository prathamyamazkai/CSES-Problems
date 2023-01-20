#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int number , count = 0 ;
    vector<int>numbers;

    for(int i=0 ; i<n ; i++){
        cin >> number ;
        numbers.push_back(number);
    }
    unordered_map<int,int>m;
    for( auto x : numbers ) m[x]++;

    for( auto x : m ){
        if(x.second >= 1) count++;
        x.second = 0 ; 
    }
    cout << count << "\n" ;
    
    return 0;
}