#include <bits/stdc++.h>
using namespace std ;
long long smallestpositive(vector<long long> arr, int n) {
   long long int res = 1;
  
   sort(arr.begin(), arr.end());
   for (int i = 0; i < n && arr[i] <= res; i++)
       res = res + arr[i];
  
   return res;
  }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n , p ;
    cin >> n ;

    vector<long long int>v;

    for(int i=0 ; i< n ; i++){
        cin >> p;
        v.push_back(p);
    }
    cout<<smallestpositive(v,n)<<"\n";
    return 0;
}