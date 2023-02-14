//Stack Problem - Left array element Smaller
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    vector<int>v(n) ;
    for(int i = 0 ; i < n ; i++ ){
        cin>>v[i];
    }
    stack<int>s;
    for(int i=0 ; i<n ; i++){
        while(!s.empty() && v[s.top()]>=v[i]) s.pop(); //if left value is greater than right(current) pop it from stack
        if(s.empty()) cout << 0 << " ";//if no left element or no smaller element o/p zero
        else cout << s.top()+1 << " ";
        s.push(i);
    }
    return 0;
}