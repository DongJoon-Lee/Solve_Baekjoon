# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

ll N, M, tmp, ret, ma=0;
vector<int> v;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        v.pb(tmp); 
    }
    ll lens = 0, lene = MAX;
    while(lens <= lene) {
        ll mid = (lens + lene)/2;
        ret = 0;
        for(int i = 0; i < N; i ++) {
            if(v[i] - mid > 0) {
                ret += v[i] - mid;
            }
        }
        if (M <= ret) {
            if (ma < mid) {
                ma = mid;
            }
            lens = mid + 1;
        }
        else {
            lene = mid - 1;
        }
    }
    cout << ma <<"\n";
}