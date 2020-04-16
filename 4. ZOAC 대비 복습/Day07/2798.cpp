// dfs라니
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

int board[102], N, M, pos=0, ans = 0;

void cal(int an, int cou, int po) {
    if (cou == 3) { // 종료조건 먼저;
        if (an <= M) {
            ans = max(ans, an);
        }
    }

    else if (po != N) {
        cal(an+board[po], cou+1, po+1);
        cal(an, cou, po+1);
        
    }
}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    fill_n(board, 102, -1);
    cin >> N >> M;
    for(int i = 0; i < N; i ++) {
        cin >> board[i];
    }
    cal(ans, 0, 0);
    cout << ans <<"\n";

    return 0;
}
