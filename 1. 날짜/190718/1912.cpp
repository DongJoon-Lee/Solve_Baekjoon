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

int N, M=-1;
int board[100001];
int save[100001];
int main (void) {
    cin >> N;
    fill_n(board, 100001, -1);
    fill_n(save, 100001, -1);
    for(int i = 0; i < N; i++) {
        cin >> board[i];
    }
    save[0] = board[0];
    M = board[0];
    for(int i = 1; i < N; i++) {
        save[i] = max(board[i], save[i-1]+board[i]);
        if (M < save[i]) {
            M = save[i];
        }
    }
    cout << M <<"\n";

}