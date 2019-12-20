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
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int count=0, tmp;
    int board[43];
    fill_n(board, 43, 0);
    for(int i = 0; i < 10; i ++) {
        cin >> tmp;
        if (board[tmp%42] == 0) {
            board[tmp%42] ++;
            count ++;
        }
    }
    cout << count<<"\n";

    return 0;
}
