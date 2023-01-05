#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    getline(cin , s);
    int n = s.length();
    int ans=1 , temp_ans=1 ;
    for(int i = 1 ; i<n ; i++){
        if(s[i] == s[i-1]) ++temp_ans;
        else{
            ans=max(ans,temp_ans);
            temp_ans=1;
        }
    }
    ans=max(ans,temp_ans);
    cout<<ans<<"\n";
    return 0;
}