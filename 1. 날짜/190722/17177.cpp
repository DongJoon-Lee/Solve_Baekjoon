# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;
int board[4];
int a, b=1;
double x;

int main (void) {
    for(int i = 0; i <3; i ++) {
        cin >>board[i];
    }
    a = pow(board[0],2) - pow(board[1],2);
    b = pow(board[0],2) - pow(board[2],2);
    x = (sqrt(a*b) - board[1]*board[2])/board[0];
    if ((int)x != x ||a == 0 || b == 0 || x ==0) {
        a = pow(board[0],2) - pow(board[1],2);
        b = 1;
        x = (sqrt(a*a) - board[1]*board[1])/board[0];
        if (x != board[2]) {
            x = -1;
        }
    }
    cout <<x << "\n";
}