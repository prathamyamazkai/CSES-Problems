//interval overlap tracker code

#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n , a , b;
    vector<tuple<int,int,int>> v; //vector of tuples contains 3 integers
    //start,flag & id , "i:id"
    
    cin >> n;

    for(int i=0 ; i<n ; i++){
        cin >> a >> b;
        v.push_back({a,0,i}); //flag => 0 (starting) interval ({a,0,i})
        v.push_back({b,1,i}); //flag => 1 (ending) interval ({b,1,i})
    }
    sort(v.begin(),v.end());
    int c=0; //int c : is used to keep track of open intervals

    int ans[n]; //ans[n] array : is used to store the id(i) of the intervals that overlap at each time
    
    vector<int>op; //vector op : is used as stack to keep track of the end times of interval as they finish
    
    for (auto [x,y,i] : v){ // The loop iterates over the elements of vector v(range based for loop)
        if (y==0) { //entry
            c++; //the loop updates the variable c when y=0 as it indiactes starting(opening interval)
            
            if (op.empty()) ans[i]=c; //when the interval is open (starts) we increase as they over lap
            else{
                ans[i] = op.back(); op.pop_back();
            }
        }
        else {
            c--; //We decrease as interval ends(closes)
            op.push_back(ans[i]);
        }
    }
    cout<< *max_element(ans,ans+n)<<"\n";
    for(int i=0 ; i<n ; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}

