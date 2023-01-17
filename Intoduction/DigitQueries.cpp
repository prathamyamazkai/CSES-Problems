#include <bits/stdc++.h>
using namespace std ;

int main(){
    //calc the power of 10
    vector<long long int> powers(19,1);
    for(int i = 1 ; i < 19 ; i++ ) powers[i] = powers[i-1]*10; //used to calculated the range
    int q ;
    cin >> q ;
    while(q--){
        long long int k ;
        cin >> k ;

        long long int numdig = 0 ; //to identify wheter its 2 digit or 3 digit number .... so on
        long long int digitlength = 0 ;
        long long int prevdig = 0 ; //keep track of previous digitlength

        for(int i = 1 ; i < 19 ; i++ ){
            digitlength += (powers[i] - powers[i-1])*i; //i represents number of digits (100-10)*2 for 2 digit range

            if(digitlength >= k){
                numdig = i ;
                break;
            }
            prevdig = digitlength ;
        }

        long long int low = powers[numdig-1] ; //numdig = 3 powers[2]=100 the starting val of 3 digit no.
        long long int high =powers[numdig]-1 ; //numdig = 3 powers[3]=1000-1 =999 the end val of 3 digit no.
        long long int ans = 0; //stores the number 
        long long int startposans = 0 ;

        //binary search

        while(low<=high){
            long long int mid = (low+high)/2;
            long long int startpos = (mid - powers[numdig-1])*numdig + prevdig +1 ;

            if(startpos <=k ){
                if(mid > ans){
                    ans = mid ;
                    startposans = startpos ;
                }
                low = mid +1 ;
            }
            else high = mid -1 ;
        }
        string number = to_string(ans);
        cout << number[k-startposans] << "\n";
    }
    
    return 0;
}

//Ranges
//123456789 -------------- one digit range 
//101112131415.......99 -- two digit range {100-10}=90 ,90*2=digitlength ,180+9=>gives all the position occupied in the range
//100101102103.......999 - three digit range