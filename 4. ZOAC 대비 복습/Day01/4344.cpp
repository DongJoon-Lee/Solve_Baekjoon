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

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int C, N;
    double sum, cou;
    int board[1002];
    cin >> C;
    for(int i = 0; i < C;i ++) {
        cin >> N;
        sum=0; cou = 0;
        fill_n(board, 1002, 0);
        for(int j = 0; j < N; j ++) {
            cin >> board[j];
            sum += board[j];
        }
        sum/= N;
        for(int j = 0; j < N; j ++) {
            if (board[j] > sum) {
                cou ++;
            }
        }
        printf("%.3lf%%\n", cou/N*100);
    }

    return 0;
}
