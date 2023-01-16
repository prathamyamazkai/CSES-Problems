#include <bits/stdc++.h>
using namespace std ;

int main(){
    vector<string>chessboard(8);
    for(int i=0 ; i < 8 ; i++){
        cin >> chessboard[i];
    }
    int count = 0;
    vector<int>column(8);
    iota(column.begin() , column.end() , 0); //puts value from (0-7) in columns , columns[0]=0 , columns[1]=1 so on
    do
    {
        bool valid = true ;
        for(int i =0 ; i < 8 ; i++){
            if(chessboard[i][column[i]] != '.'){
                valid = false ;
                break;
            }
        }
        vector<bool> diagonaloccupied(15,false);
        for(int i =0 ; i < 8 ; i++){
            if(diagonaloccupied[i+column[i]]) valid = false ; //Anti diagonals
            diagonaloccupied[i+column[i]] = true ;
        }
        for(int i =0 ; i < 15 ; i++){
            diagonaloccupied[i+column[i]] = false ;
        }
        for(int i =0 ; i < 8 ; i++){
            if(diagonaloccupied[i+7-column[i]]) valid = false ; //main diagonals
            diagonaloccupied[i+7-column[i]] = true ;
        }
        count+= valid;
    } while (next_permutation(column.begin() , column.end()));
    cout << count ;
    return 0;
}

/*
1.we need to place 8 queens so they dont attack each other
2.one row for each queen with differnet columns
3.Hence rows are array (1-8) and columns to be place is the permuations of (1-8)
*/
