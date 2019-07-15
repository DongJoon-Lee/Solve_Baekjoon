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
vector <pair <int, string > > v;
int a, tok;
string s;
int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    cin >> a;
    for(int i = 0; i < a; i ++) {
        cin >> s;
        tok = 0;
        for(int j = 0; j < v.size(); j ++) {
            if (s == v[j].second) {
                tok = 1;
                break;
            }
        }
        if (!tok) {
            v.pb(mp(s.size(),s));
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i ++) {
        cout << v[i].second <<"\n";
    }
}