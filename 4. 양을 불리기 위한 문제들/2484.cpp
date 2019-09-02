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

int N, tmp, ret=MIN;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++) {
        vector<pair<int,int>> v;
        for(int j = 0; j <= 6;j ++) {
            v.pb(mp(0,j));
        }
        for(int j = 1; j <= 4; j ++) {
            cin >> tmp;
            v[tmp].first++;
        }
        sort(v.begin(), v.end());
        if (v[v.size()-1].first == 4) {
            ret = max(ret, 50000 + v[v.size()-1].second*5000);
        }
        else if (v[v.size()-1].first == 3) {
            ret = max(ret, 10000 + v[v.size()-1].second*1000);
        }
        else if (v[v.size()-1].first == 2) {
            if (v[v.size()-2].first == 2) {
                ret = max(ret, 2000 + v[v.size()-1].second*500 + v[v.size()-2].second*500);
            }
            else{
                ret = max(ret, 1000+v[v.size()-1].second*100);
            }
        }
        else {
            ret = max(ret, v[v.size()-1].second*100);
        }
    }
    cout << ret << "\n";
    return 0;
}