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

int N, cou = 0;
int board[1000002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N;i ++) {
        cin >> board[i];
    }
    for(int i = 0; i < N; i ++) {
        if (board[i]) {
            board[i] = 0;
            if(i + 1 < N) {
                if (board[i+1]) {
                    board[i+1] = 0;
                }
                else {
                    board[i+1] = 1;
                }
            }
            if (i + 2 < N) {
                if(board[i+2]) {
                    board[i+2] =0;
                }
                else {
                    board[i+2] = 1;
                }
            }
            cou++;
        }
    }
    cout << cou<<"\n";

}