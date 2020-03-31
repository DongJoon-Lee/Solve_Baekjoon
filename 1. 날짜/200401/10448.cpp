# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int n, tmp, chk;
int board[46];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    fill_n(board, 46, 0);
    tmp = 0;
    for(int i = 1; i < 45; i ++) {
        tmp += i;
        board[i] = tmp;
    }
    for(int a = 0; a < n; a ++) {
        cin >> tmp;
        chk = 0;
        for(int i = 1; i < 45; i ++) {
            for(int j = 1; j < 45; j ++) {
                for(int k = 1; k < 45; k ++) {
                    if (board[i] + board[j] + board[k] == tmp) {
                        cout << 1 << "\n";
                        chk = 1;
                        break;
                    }
                }
                if (chk) {
                    break;
                }
            }
            if (chk) {
                break;
            }
        }
        if (!chk) {
            cout << 0 << "\n";
        }
    }

    

    return 0;
}