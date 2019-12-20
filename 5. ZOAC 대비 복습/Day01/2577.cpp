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

    int a, b, c;
    cin >> a >>b >> c;
    int board[11];
    fill_n(board, 11, 0);
    a = a * b * c;
    string ans = to_string(a);
    for(int i = 0; i < ans.length(); i ++) {
        board[ans[i]-48]++;
    }
    for(int i = 0; i < 10; i ++) {
        cout << board[i]<<"\n";
    }

    return 0;
}
