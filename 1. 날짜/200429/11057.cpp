/*
//bottom - up

# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N;
int board[11][1002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 11; i ++) {
    	fill_n(board[i], 1002, -1);
    	board[i][1] = 1;
    }
    cin >> N;
    for(int i = 2; i <= N; i ++) {
    	for(int j = 0; j <= 9; j ++) {
    		if (j == 0) {
    			board[j][i] = board[j][i-1];
    		}
    		else {
    			board[j][i] = (board[j-1][i] + board[j][i-1])%10007;
    		}
    	}
    }
    ll sum = 0;
    for(int i = 0; i <= 9; i ++) {
    	sum = (sum + board[i][N])%10007;
    }
    
    //for(int i = 0; i <= 9; i ++) {
    //	for(int j = 1; j <= N; j ++) {
    //		cout << board[i][j]<<" ";
    //	}
    //	cout <<"\n";
    //}
    
    cout << sum <<"\n";
    

    return 0;
}
*/

//top - down

# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N;
int board[11][1002];

ll cal(int row, int col) {
	if (row == 0) {
		return 1;
	}
	else if (col == 1) {
	  return 1;
	}
	else if (board[row][col] != -1) {
		return board[row][col];
	}
	board[row][col] = (cal(row-1, col) + cal(row, col-1))%10007;
	return board[row][col];
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 0; i < 11; i ++) {
    	fill_n(board[i], 1002, -1);
    	board[i][1] = 1;
    }
    cin >> N;
    ll sum = 0;
    for(int i = 0; i <= 9; i ++) {
    	sum = (sum + cal(i, N))%10007;
    }
    //for(int i = 0; i <= 9; i ++) {
    //	for(int j = 1; j <= N;j ++) {
    //		cout << board[i][j]<<" ";
    //	}
    //	cout << "\n";
    //}
    cout << sum <<"\n";
    	

    return 0;
}