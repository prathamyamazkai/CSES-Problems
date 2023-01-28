#include<bits/stdc++.h>
#define ar array 
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    vector<int>a(n) ;
    for(int &x:a) cin >> x ;
    map<int,int>mp;
    int ans = 0;
    for(int i=0 , j = 0 ; i<n ; i++){
        j = max(mp[a[i]],j);
        ans = max(ans,i-j+1);
        mp[a[i]] = i+1; 
    }
    cout<<ans<<"\n";
    return 0;
}

/*
The code uses sliding window protocol
2 pointers i and j are used to keep track of sub string
The map 'mp' keeps track of last seen index of each character
For each charcter at index 'i' the code checks if the charcter has been seen before
and updates the value of j 
*/


/*
1)Initialize a variable j, to store the maximum value of the index such that there are no repeated elements between index i and j
2)Traverse the array and keep updating j based on the previous occurrence of a[i] stored in the HashMap.
3)After updating j, update ans accordingly to store the maximum length of the desired subarray.
4)Print ans, after traversal, is completed.
*/