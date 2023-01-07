#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t;
    //test cases : t , row : x , coulumn : y
    while(t--){
        long long int x , y ;
        cin >>x>>y ;
        if( x < y) { //column > row
            if(y&1) cout<<(y*y)-x+1<<"\n"; //column odd
            else cout<<((y-1)*(y-1))+x<<"\n";//column even
        }
        else {//row > column
            if(x&1) cout<<((x-1)*(x-1))+y<<"\n"; //row odd
            else cout<<(x*x)-y+1<<"\n";         //row even
        }
    }
    return 0;
}