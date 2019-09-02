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

int n, p, tmp1;
string tmp2;



int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i ++) {
        cin >> p;
        vector<pair<int, string>> v;
        for(int j = 0; j < p ; j++) {
            cin >> tmp1 >> tmp2;
            v.pb(mp(tmp1,tmp2));
        }
        sort(v.begin(), v.end());
        cout<<v[v.size()-1].second<<"\n";
    }
    return 0;
}