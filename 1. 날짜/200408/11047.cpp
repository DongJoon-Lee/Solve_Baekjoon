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

int N, K, tmp, ans=0;
vector <int> v;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    for(int i = 0; i< N; i ++) {
        cin >> tmp;
        v.pb(tmp);  
    }
    for(int i = N-1; i >= 0; i --) {
        if (v[i] <= K) {
            ans += K/v[i];
            K %= v[i];
        }
    }
    cout << ans<<"\n";


    return 0;
}