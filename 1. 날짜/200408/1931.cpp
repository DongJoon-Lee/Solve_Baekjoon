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
int N, tmp1, tmp2, ans=0;
vector <pair <int, int > > v;
// 하나가 끝나야 다음걸 할 수 있으니까 가장 먼저 끝나는 것 부터 한다.

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> tmp1 >> tmp2;
        v.pb(mp(tmp2, tmp1));
    }
    sort(v.begin(), v.end());   
    tmp1 = 0;
    for(int i = 0; i < N; i ++) {
        if (tmp1 <= v[i].second) {
            tmp1 = v[i].first;
            ans ++;
        }
    }
    cout << ans <<"\n";
    
    return 0;
}