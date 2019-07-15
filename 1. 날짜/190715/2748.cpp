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

ll board[91];
int a;

ll fib(int n) {
    if (n == 0) {
        return n;
    }
    else if (n == 1 || n == 2) {
        return 1;
    }
    else if (board[n] > -1) {
        return board[n];
    }
    else{
        board[n] = fib(n-1) + fib(n-2);
        return board[n];
    }
}

int main (void) {
    cin >> a;
    fill_n(board, 91, -1);
    cout << fib(a) << "\n";

}