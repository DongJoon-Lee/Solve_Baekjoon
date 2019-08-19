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

int N;
int board[502][2];
int cou2=0, cou5=0;

int cal_2(int a) {
    if (a < 2) {
        return 0;
    }
    else if (board[a][0] != 0) {
        return board[a][0];
    }
    else {
        if (a%2==0) {
            board[a][0] = cal_2(a/2)+1;
        }
        return board[a][0];
    }
}

int cal_5(int a) {
    if (a < 5) {
        return 0;
    }
    else if (board[a][1] != 0) {
        return board[a][1];
    }
    else {
        if (a%5 ==0) {
            board[a][1] = cal_5(a/5)+1;
        }
        return board[a][1];
    }
}

int main (void) {
    for(int i = 0; i < 502; i ++) {
        fill_n(board[i], 2, 0);
    }
    cin >> N;
    for(int i = 1; i <= N; i ++) {
        cou2 += cal_2(i);
        cou5 += cal_5(i);
    }
    cout << min(cou2, cou5) << "\n";
    return 0;

}