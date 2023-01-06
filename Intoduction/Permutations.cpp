#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    if(n==1) cout<<1<<"\n";
    if(n==2 || n==3 ) cout << "NO SOLUTION" <<"\n";
    else{
        for(int i = 2 ; i <= n ; i+=2) cout << i << " " ; // we inc by 2 because diff shld not be 1 b/w 2 adj no.
        for(int i = 1 ; i <= n ; i+=2) cout << i << " "; // hence inc by 2 makes the diff b/w adj no. 2
    }
    return 0;
}