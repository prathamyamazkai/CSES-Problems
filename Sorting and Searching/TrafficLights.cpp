#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x , n , a ;
    cin >> x >> n ;

    set<int>s;
    s.insert(0);
    s.insert(x);

    multiset<int>ms;
    ms.insert(x);

    while(n--){
        cin >> a ;
        auto it = s.lower_bound(a); //finds the closest point to a
        auto it2 = it;
        --it2; //finds the previous point in the set
        ms.erase(ms.find(*it - *it2)); //deletes the length b/w closest point and previous point from ms 
        ms.insert(a - *it2); //inserts the lentgth b/w  "a" and previous point
        ms.insert(*it - a); //inserts the lentgth b/w  "a" and closest point

        cout<<*--ms.end()<<" "; //largest length per insertion
        s.insert(a);
    }
    return 0;
}

/*
This algo splits a line segment of length x into n parts by inserting n-1 pts.
At each insertion find the length of the longest segment

Set 's' is used to keep track of the points inserted so far
Multiset 'ms' is used to keep track of the length of all segments formed after each insertion
*/