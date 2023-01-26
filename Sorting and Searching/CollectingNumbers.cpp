#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n , ans = 1;
    cin>>n;

    vector<int>v(n),b(n);

    for(int &x : v) cin >> x , x-- ; //The x-- subs 1 from i/p making it 0-indexed , o/p will i/p that are unique and non-decreasing
    for(int i = 0 ; i < n ; i++) b[v[i]]=i;//b stores the index of each elemnt of v
    for(int i = 1 ; i < n ; i++) ans+=b[i]<b[i-1];//b shows the position at which element appears
    cout << ans ;

    return 0;
}

/*
5
i:3 1 4 2 5
x--
v:2 0 3 1 4 
b[v[0]]=0 => b[2]=0
b[v[1]]=1 => b[0]=1
b[v[2]]=2 => b[3]=2
b[v[3]]=3 => b[1]=3
b[v[4]]=4 => b[4]=4
  
  1 2 3 4 5
  0 1 2 3 4
b:1 3 0 2 4

b[1]<b[0] => 3 < 1 False ans=1 
b[2]<b[1] => 0 < 3 True ans=2 this shows that element 2(2+1=3) appears before 0(1) hence we cant take it one loop
b[3]<b[2] => 2 < 0  False ans=2 shows that 3(4) appears after 2(3)
b[4]<b[3] => 4 < 2  False ans=2 shows that 4(5) appears after 3(4)

*/