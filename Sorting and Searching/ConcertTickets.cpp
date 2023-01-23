#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n , m ;
    cin >> n >> m ;
    int ticket , customer ;
    vector<int>ticket_price;
    vector<int>customer_price;

    for(int i=0 ; i<n ; i++){
        cin >> ticket ;
        ticket_price.push_back(ticket);
    }

    for(int i=0 ; i<m ; i++){
        cin >> customer ;
        customer_price.push_back(customer);
    }

    multiset<int,greater<int>>s; //sorts set high to low and returns 1st iterator less than the lowerbound 
    for(int i=0 ; i<n ; i++){
        s.insert(ticket_price[i]);
    }

    for(int i=0 ; i<m ; i++){
        auto it = s.lower_bound(customer_price[i]);
        if(it==s.end()) cout<<-1<<"\n";
        else{
            cout<<*it<<"\n";
            s.erase(it);
        }
    }

    
    return 0;
}