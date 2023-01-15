#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    getline(cin , s);
    //sort the string first
    sort(s.begin() , s.end());
    vector<string> permutations;
    do{
        permutations.push_back(s);
    }while(next_permutation(s.begin() , s.end()));//generates lexiographical permuation

    cout<<permutations.size()<<"\n"; //total posssible strings
    for(auto x : permutations) cout<<x<<"\n";

    return 0;
}