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

    int a, b, n =0;
    string ans;
    cin >> a >> b;
    if (b - a == 1) {
        n = 1;
    }
    else {
        n = -1;
    }
    a = b;
    for(int i = 2; i < 8; i ++) {
        cin >> b;
        if (a < b && n != 1 || a > b && n != -1) {
            ans = "mixed\n";
            n = 0;
            break;
        }
        a = b;
    }
    if (n == 1) {
        ans = "ascending\n";
    }
    else if (n == -1) {
        ans = "descending\n";
    }
    cout << ans;

    return 0;
}
