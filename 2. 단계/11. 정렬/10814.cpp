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

vector < pair< int, pair <int, string > > > v;
int a, b;
string c;

int main (void) {
    cin >>a;
    for(int i = 0; i < a; i ++) {
        cin >> b >> c;
        v.pb(mp(b, mp(i, c)));
    }
    sort(v.begin(), v.begin() + v.size());
    for(int i =0 ; i < a; i ++) {
        cout << v[i].first <<" "<< v[i].second.second << "\n";
    }
}