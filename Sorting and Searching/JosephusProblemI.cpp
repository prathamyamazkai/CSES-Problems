#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
signed main(){
  int n,k=1;
  cin >> n ; 
  int p =k%n ; oset<int>a ;
  for(int i=1;i<=n;i++)
    a.insert(i) ;
  while(a.size()){
    int r = *a.find_by_order(p) ;
    a.erase(r) ;  
    if(a.size())
      p=(p+k)%a.size() ;
    cout << r << " " ;
  }
}

//IF kth person is executed k+1 th person will be safe next round
//Therefore to keep track of position , use k%n and update by p = (p+k)%n