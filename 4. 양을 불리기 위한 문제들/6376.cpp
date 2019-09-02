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

int board[12];
double e;
int fac(int);

int main (void) {

    cout<<"n e\n- -----------\n";
    fill_n(board, 12, 0);
    cout<<"0 1\n1 2\n2 2.5\n";
    for(int i = 3; i <= 9; i ++) {
        e=0;
        for(int j = 0; j <= i; j ++) {
            e += (double)1/fac(j);
        }
        printf("%d %.9f\n", i, e);
    }
    
}

int fac(int a) {
    if (a == 1 || a == 0) {
        return 1;
    }
    else if (a == 2) {
        return 2;
    }
    else if (board[a] != 0) {
        return board[a];
    }
    else {
        board[a] = a * fac(a-1);
        return board[a];
    }
}