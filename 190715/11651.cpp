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

vector <pair<int, int > > v;
int a;
int x, y;
int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    while(a--) {
        cin >>x >> y;
        v.pb(mp(y,x));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i <v.size(); i ++) {
        cout << v[i].second <<" " << v[i].first <<"\n";
    }


}