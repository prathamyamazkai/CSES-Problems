#include <bits/stdc++.h>
using namespace std ;

int main(){

    int n , m , k , sizes , apt ;
    cin >> n >> m >> k ;

    vector<int> desired_size;
    vector<int> apartment_size;
    for(int i=0 ; i<n ; i++){
        cin >> sizes ;
        desired_size.push_back(sizes);
    }

    for(int i=0 ; i<m ; i++){
        cin >> apt ;
        apartment_size.push_back(apt);
    }

    sort(desired_size.begin() , desired_size.end());
    sort(apartment_size.begin() , apartment_size.end());
    
    int ans = 0 ;
    int i = 0 , j = 0 ;
    while (i<n && j<m){

        if(abs(apartment_size[j]-desired_size[i]) <= k){
            ans++;
            i++;
            j++;
        }
        else if(desired_size[i] < apartment_size[j]) i++ ;

        else j++ ;

    }
    cout << ans <<'\n';
    return 0;
}