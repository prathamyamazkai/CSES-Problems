//Working 
#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n , a , b;
    vector<tuple<int,int,int>> v;
    cin >> n;

    for(int i=0 ; i<n ; i++){
        cin >> a >> b;
        v.push_back({a,0,i});
        v.push_back({b,1,i});
    }
    sort(v.begin(),v.end());
    int c=0;
    int ans[n];
    vector<int>op;
    for (auto [x,y,i] : v){
        if (y==0) { //entry
            c++;
            if (op.empty()) ans[i]=c;
            else{
                ans[i] = op.back(); op.pop_back();
            }
        }
        else {
            c--;
            op.push_back(ans[i]);
        }
    }
    cout<< *max_element(ans,ans+n)<<"\n";
    for(int i=0 ; i<n ; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}