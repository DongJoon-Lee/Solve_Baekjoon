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

int T, tmp;


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i = 0; i < T; i ++) {
        vector <int> v;
        for(int j = 0; j < 5; j++) {
            cin >> tmp;
            v.pb(tmp);
        }
        sort(v.begin(), v.end());
        if (v[3]- v[1] >= 4) {
            cout <<"KIN\n";
        }
        else {
            cout << v[1] + v[2] + v[3]<<"\n";
        }

    }

}