/*
// bottom-up

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

int N, K;
int board[1002][1002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 0; i < 1002; i ++) {
    	fill_n(board[i], 1002, -1);
    }
    cin >> N >> K;
    for(int i = 0; i <= N; i ++) {
    	for(int j = 0; j <= K; j ++) {
    		if (i == j) {
    			board[i][j] = 1;
    		}
    		else if (j == 0) {
    			board[i][j] = 1;
    		}
    		else if (j == 1) {
    			board[i][j] = i;
    		}
    		else {
    			board[i][j] = (board[i-1][j-1] + board[i-1][j])%10007;
    		}
    	}
    }
    for(int i = 0; i <= N; i ++) {
    	for(int j = 0; j <= i; j ++) {
    		cout << board[i][j] <<" " ;
    	}
    	cout <<"\n";
    }
    cout << board[N][K]<<"\n";
    
    		
    

    return 0;
}
//nck = n-1ck-1 + n-1ck
*/


//top-down

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

int N, K;
int board[1002][1002];

ll cal(int n, int k) {
	if (n == k) {
		return 1;
	}
	else if (k == 1) {
		return n;
	}
	else if (k == 0) {
		return 1;
	}
	else if (board[n][k] != -1) {
		return board[n][k];
	}
	board[n][k] = (cal(n-1, k-1) + cal(n-1, k))%10007;
	return board[n][k];
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 0; i < 1002; i ++) {
    	fill_n(board[i], 1002, -1);
    }
    cin >> N >> K;
    cout << cal(N, K) <<"\n";

    return 0;
}
