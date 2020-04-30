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

int K, N, board[10002], ans;
ll st, en;

ll cal(ll m) {
    int cou = 0;
    // ll tmp = 0;
    for(int i= 1; i <= K; i ++) {
        cou += board[i]/m;
    }
    if (cou >= N) {
        return 1;
    }
    return 0;
}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> K >> N;
    en = 0;
    for(int i = 1; i <= K; i ++) {
        cin >> board[i];
        en += board[i];
    }
    st = 1;
    ll mid = 0;
    while(st <= en) {
        mid = (st + en)/2;
        // cout << st << "   " << en<<"\n";
        if (cal(mid)) {
            ans = mid;
            st = mid + 1;
        }
        else {
            en = mid - 1;
        }
        
    }
    cout << ans <<"\n";


    return 0;
}