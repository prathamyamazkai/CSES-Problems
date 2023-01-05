#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long int t , n , s , sum=0;
    cin>>n;
    t=n;
    while(n>1){
        cin>>s;
        sum += s;
        n--;
    }
    t= (t*(t+1))/2 ;
    cout<<(t-sum)<<"\n";
    return 0;
}