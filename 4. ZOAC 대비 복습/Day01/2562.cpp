# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector <pair <int, int> > v;
    int tmp;

    for(int i = 0; i < 9; i ++) {
        cin >> tmp;
        v.pb(mp(tmp, i));
    }
    sort(v.begin(), v.end());
    cout << v[8].first<<"\n"<< v[8].second+1<<"\n";

    return 0;
}
