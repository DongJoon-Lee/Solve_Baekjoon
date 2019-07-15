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

vector <pair < int, int > > v;
int a, b, tok = 1, cnt = 0;
int ans3 = 1, tok2 = 0, save =0 ;
float ans1 = 0;
int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    cin >> a;
    for(int i = 0; i < a; i ++) {
        cin >> b;
        for(int j = 0; j < v.size(); j ++) {
            if (b == v[j].first) {
                v[j].second++;
                if (ans3 < v[j].second) {
                    ans3 = v[j].second;
                }
                tok = 0;
            }
        }
        if (tok) {
            v.pb(mp(b,1));
        }
        tok=1;
        ans1 += b;
    }
    printf("%.0f\n", ans1/a);
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i ++) {
        cnt += v[i].second;
        if (cnt >= a/2+1) {
            cout << v[i].first << "\n";
            break;
        }
    }
    for(int i = 0; i < v.size(); i ++) {
        if (ans3 == v[i].second) {
            tok2++;
            save = i;
        }
        if (tok2 == 2) {
            cout << v[i].first << "\n";
            break;
        }
    }
    if (tok2 == 1) {
        cout << v[save].first <<"\n";
    }
    cout << abs(v[v.size()-1].first - v[0].first) <<"\n";

}