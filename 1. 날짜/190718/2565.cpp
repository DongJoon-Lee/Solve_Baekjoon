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

int N;
int a, b;
vector < pair <int, int> > v;
int ans[101];
int ret = -1;

int main (void) {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> a >> b;
        v.pb(mp(a, b));
    }    
    fill_n(ans, 101, 1);
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < i; j ++) {
            if (v[j].second < v[i].second && ans[i] < ans[j] + 1) {
                ans[i] = ans[j] + 1;
            }
        }
        if (ret < ans[i]) {
            ret = ans[i];
        }
    }
    cout << N-ret << "\n";

}