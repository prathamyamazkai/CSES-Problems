//Code needs Optimization - TLE Error Resolved by Hash map
//Using Hash map to make it O(n)
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n , x ;
    cin >> n >> x ;
    vector<int>a(n) ;
    for(int &x : a ){
        cin >> x ;
    }
    // Store sums of all pairs
    // in a hash table
    unordered_map<int , pair<int, int> > mp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            mp[a[i] + a[j]] = { i, j };
    if(n<3){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    // Traverse through all pairs and search
    // for X - (current pair sum).
    for (int i = 0; i < n-1 ; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = a[i] + a[j];
 
            // If X - sum is present in hash table,
            if (mp.find(x - sum) != mp.end()) {
 
                // Making sure that all elements are
                // distinct array elements and an element
                // is not considered more than once.
                pair<int, int> p = mp[x - sum];
                if (p.first != i && p.first != j && p.second != i && p.second != j){
                    cout << i+1 << " " << j+1 << " "<< p.first+1 << " "<< p.second+1;
                    return 0;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}