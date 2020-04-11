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

int L, P, V, n, ans;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> L >> P >> V;
    n = 0;
    while(L*P*V != 0) {
        n ++;
        ans = V/P * L;
        ans += min(V%P, L);
        cout << "Case " << n << ": " << ans<<"\n";
        cin >> L >> P >> V;
    }

    return 0;
}