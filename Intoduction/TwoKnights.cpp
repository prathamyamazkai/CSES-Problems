#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin >> n;
    for(long long i=1 ; i<=n ; i++){
        long long total_positions = (i*i)*(i*i-1)/2 ;
        long long attacking_positions = 4*(i-1)*(i-2 );
        cout<< total_positions - attacking_positions << "\n";
    }
    return 0;
}
/*Total Positions
 first knight can placed in n^2 ways on a chess board
 2nd knight can be placed in n^2 - 1 was we subtract 1 as first night is already placed
 hence for total positions we add them both and divide by 2 because both the knights are identical 
 =>(n*n)(n*n-1)/2

 */
 /*Atttack Positions
A knight Moves in L shape covering 3 tiles of chess board
So the range is either 2/3 or 3/2 regions of chess board (L shape)
For both 3/2 & 2/3 region we have (n-1) towards column (horizontal) and (n-2) downward i.e vetical
There fore we mulitply it with 2 => 2*(n-1)(n-2)
A knight can attack in 2 directions hence multiply it with 2 again =>2*2(n-1)(n-2)

 */