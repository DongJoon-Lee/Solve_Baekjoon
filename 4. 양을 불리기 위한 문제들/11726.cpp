# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

ll n, ret;

int cal(int);
int board[1002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    fill_n(board, 1002, 0);
    cout<<cal(n)<<"\n";
    return 0;
}

int cal(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    else if( board[n] != 0) {
        return board[n];
    }
    else {
        board[n] = (cal(n-1) + cal(n-2))%10007;
        return board[n];
    }
}