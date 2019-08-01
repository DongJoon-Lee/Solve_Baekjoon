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
int board[502][2] = {0,};
int save[502][502] = {0,};
// vector <int> v[502][502][3];

int cal(int a, int b) {
    if (a == b) {
        return 0;
    }
    else if (save[a][b] != 0) {
        return save[a][b];
    }
    else if (abs(a-b) == 1) {
        save[a][b] = board[a][0] * board[b][0] * board[b][1];
        return save[a][b];
    }
    else {
        save[a][b] = cal(a+1, b) +board[a][0] *board[a+1][0] * board[b][1];
        for(int i =1 ; i < b-a;  i ++) {
            save[a][b] = min(save[a][b], cal(a,a+i)+cal(a+i+1, b) + board[a][0]*board[a+i][1]*board[b][1]);
        }
        return save[a][b];
    }


    // save[a+i][b] + board[a][0]*board[a][1]*board[b][1];
}

int main (void) {
    cin >> N;
    for(int i = 1; i <= N; i ++) {
        cin >> board[i][0] >> board[i][1];
    }
    cout << cal(1, N) << "\n";
    // for(int i = 1; i <= N; i ++) {
    //     for(int j = 1; j <= N;j ++) {
    //         cout << save[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}