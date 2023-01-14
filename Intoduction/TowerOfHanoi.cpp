#include <bits/stdc++.h>
using namespace std ;

void solve(int n, int left_rod , int right_rod , int middle_rod){
    if(n==1){
        cout<<left_rod<<" "<<right_rod<<"\n";
        return;
    }
    solve(n-1,left_rod,middle_rod,right_rod);
    cout<<left_rod<<" "<<right_rod<<"\n";
    solve(n-1,middle_rod,right_rod,left_rod);
}

int main(){
    int n;
    cin >> n;
    cout<<((1<<n)-1)<<"\n";
    solve(n,1,3,2);
    return 0;
}