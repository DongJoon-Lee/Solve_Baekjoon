# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
# include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, M;
int board[100002], st, en, mid, ans;

int cal(int m) {
    int cou = 1;
    int tmp=0;
    for(int i = 1; i <= N; i ++) {
        if (board[i]  > m) {
            return 0;
        }
        tmp += board[i];
        if (tmp > m) {
            tmp = board[i];
            cou++;
        }
    }
    if (cou <= M) {
        return 1;
    }
    else {
        return 0;
    }
}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    en = 0;
    for(int i = 1;i <= N; i ++) {
        cin >> board[i];
        en += board[i];
    }
    st = 1;
    while(st <= en) {
        mid = (en + st)/2;
        if(cal(mid)) {
            ans = mid;
            en = mid-1;
        }
        else {
            st = mid + 1;
        }
    }
    cout << ans <<"\n";

    return 0;
}