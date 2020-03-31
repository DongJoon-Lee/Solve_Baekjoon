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

int N, S, tmp, cou=0, tok = 0;
vector <int> v;

void cal(int s, int idx) {
    if (idx != v.size()) {
        s += v[idx];
        if (s == S) {
            cou ++;
        }
        idx ++;
        cal(s, idx);
        cal(s - v[idx-1], idx);
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> S;
    for(int i = 0; i < N; i ++) {
        cin >> tmp;
        v.pb(tmp);
    }
    sort(v.begin(), v.end());
    cal(0, 0);
    cout << cou <<"\n";

    return 0;
}