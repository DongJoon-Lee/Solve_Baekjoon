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

string str;
int N, ans = 0, tok = 0;
int board[27];
int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> str;
        tok = 0;
        fill_n(board, 27, 0);
        if (str.length() == 1 || str.length() == 0) {
            ans ++;
            continue;
        }
        if (str[0] != str[1]) {
            board[str[0]-97] ++;
        }
        for(int j = 1; j < str.length(); j ++) {
            if (str[j] != str[j-1]) {
                board[str[j-1]-97] = 1;
                if (board[str[j]-97] != 0) {
                    tok = 1;
                    break;
                }
            }
        }
        if (tok) {
            continue;
        }
        ans++;
    }
    cout << ans<<"\n";

    return 0;
}
