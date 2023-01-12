#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    getline(cin , s);
    unordered_map<char,int>m;
    for(char c : s) m[c]++ ; //store the frequency of character
    int count = 0;
    char ch;
    for(auto x : m){
        if(x.second&1){
            ch = x.first ; //store the odd character
            count++; //count the odd frequency
        }
    }
    if((s.size()%2==0 && count > 0) ||count >1 ) cout<<"NO SOLUTION"<<"\n" ;//Even length string cannot have odd no.of charcters or oddstring with odd charcters > 1
    else{
        string result = "";
        for(auto x : m){
            for(int i=1 ; i<=x.second/2 ;i++) result += x.first ; //we need only half no.of charcters for the fisrt half
        }
        cout << result ;
        if(s.size()&1) cout<<ch ;//if length of string is odd put the odd charcter in middle
        reverse(result.begin(),result.end());
        cout<<result ;
    }
    return 0 ;
}