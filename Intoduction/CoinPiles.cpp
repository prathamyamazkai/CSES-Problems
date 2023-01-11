#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin >> t ;
    int a , b ;
    while(t--){
        cin >> a >> b ;
        if (max(a,b) <= 2*min(a,b) && (a+b)%3==0) cout<<"YES"<<"\n";
        else cout << "NO" << "\n" ; 
    }
    return 0;
}

/*
let a=1 b=2 
max(1,2) =2 min(1,2) =1 
2 <= 1*2  is True
sum = a+b = 3 hence multiple of 3 i.e, (a+b)%3 is 0 
bothe the condition satisfies we print YES
*/

/*
let a=2 b=2
max(2,2) = 2 , 2*min(2,2) = 2*2 =4
if(2 <= 4) hence first condition True
if((2+2)%3==0) second condition fails as 4 is not a multiple of 3
hene T && F == F so if loop is not executed
else prints NO 
*/

/*
let a=5 b=2
max(5,2) = 5 , 2*min(5,2)=2*2 =4
5<4 condition is False
this tell us that one pile of coin will get over before the other
a b
5 2
3 1
1 0
pile a has 1 coin remaining and b is empty
*/