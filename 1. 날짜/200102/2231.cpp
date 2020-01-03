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

int N, ans = 1, tmp;

bool test(int a, int b) {
    int save = b;
    int tok = 1;
    while(tok <= b) {
        save += b/tok%10;
        tok *= 10;
    }
    if (save == a) {
        return 1;
    }
    return 0;
}

int cal(int n) {
    int tok = 0;
    while(ans < n) {
        if (test(n, ans)) {
            tok = 1;
            break;
        }
        ans ++;
    }
    if (tok) {
        return ans;
    }
    return 0;
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    cout << cal(N)<<"\n";
    return 0;
}
