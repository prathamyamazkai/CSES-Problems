#include <bits/stdc++.h>
using namespace std ;

// path should visit all the 48 box to form a path

bool visited[7][7];
int reserved[49];//state which direction to move
int paths = 0 , steps = 0 ;

void solved(int r , int c){

    if(r==6 && c==0){

        if(steps==48){
            paths++;
        }

        return ;
    }

//hit wall optimization
    if (visited[r][c] || (
		
		
			((c >= 1 && c <= 5 && !visited[r][c + 1] && !visited[r][c - 1]) &&
			((r == 0 && visited[r + 1][c]) || (r == 6 && visited[r - 1][c]))) 
		||
			((r >= 1 && r <= 5 && !visited[r + 1][c] && !visited[r - 1][c]) &&
				((c == 0 && visited[r][c + 1]) || (c == 6 && visited[r][c - 1]))) 
		
		|| (r >= 1 && r <= 5 && c >= 1 && c <= 5 && visited[r + 1][c] 
			&& visited[r - 1][c] && !visited[r][c + 1] && !visited[r][c - 1])
 
		|| (r >= 1 && r <= 5 && c >= 1 && c <= 5 && visited[r][c + 1] && visited[r][c - 1] 
			&& !visited[r + 1][c] && !visited[r - 1][c])))
	{
		return;
	}
 
	visited[r][c] = true;
 
//Tracks movement for strings 'U' , 'D' ,'L', 'R' respectively
	if (reserved[steps] != -1) {
 
		switch (reserved[steps]) {
		case 0:
			if (r > 0 && !visited[r - 1][c]) {
				steps++;
				solved(r - 1, c); // up
				steps--;
			}
			break;
		case 1:
			if (r < 6 && !visited[r + 1][c]) {
				steps++;
				solved(r + 1, c);  //down
				steps--;
			}
			break;
		case 2:
			if (c > 0 && !visited[r][c - 1]) {
				steps++;
				solved(r, c - 1); //left
				steps--;
			}
			break;
		case 3:
			if (c < 6 && !visited[r][c + 1]) {
				steps++;
				solved(r, c + 1); // right
				steps--;
			}
			break;
 
		}
		
		visited[r][c] = false;
		return;
	}

// When string has character '?' we can move in any direction

    visited[r][c]=true ; //backtrack

    if(r<6 && !visited[r+1][c]){
        steps++; //if we choose to go down
        solved(r+1,c); //down 
        steps--; //if we choose to not go down
    }
    if(r>0 && !visited[r-1][c]){
        steps++; //if we choose to go up
        solved(r-1,c); //up
        steps--; //if we choose to not go up
    }
    if(c<6 && !visited[r][c+1]){
        steps++; //if we choose to go right
        solved(r,c+1); //right
        steps--; //if we choose to not go right
    }
    if(c>0 && !visited[r][c-1]){
        steps++; //if we choose to go left
        solved(r,c-1); //left 0<-1<-2<-3<-4<-5<-6
        steps--; //if we choose to not go left 
    }
    visited[r][c]=false; //backtrack
}

int main(){

    string s;
	cin >> s;
//reserved stores the direction the path has to move in
	for (int i = 0; i < s.size(); i++) {
		switch (s[i]) {
		case '?':
			reserved[i] = -1;
			break;
		case 'U':
			reserved[i] = 0;  //case 0 in above function will make path go up
			break;
		case 'D':
			reserved[i] = 1; //case 1 in above function will make path go Down
			break;
		case 'L':
			reserved[i] = 2;  //case 2 in above function will make path go Left
			break;
		case 'R':
			reserved[i] = 3;  //case 3 in above function will make path go Right
			break;
 
		}
	}
 
	solved(0, 0);
	cout << paths << endl;

    return 0;
}