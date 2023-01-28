#include<bits/stdc++.h>
#define ar array 
using namespace std ;
int main(){
    int n , x ;
    cin >> n ;
    
    multiset<int>s;
    for(int i=0 ; i<n ; i++){
        cin >> x ;
        auto it = s.upper_bound(x);
        if(it==s.end())s.insert(x);
        else{
            s.erase(it);
            s.insert(x);
        }
    }
    cout<<s.size()<<"\n";
    
    return 0;
}

//upper_bound gives first element greater than x
//it returns elemnt greater than x
//The greater element is removed from set as it becomes the base
//if there is no element greater than x its added to set

//The above code can also be used to remove duplicate integers from set