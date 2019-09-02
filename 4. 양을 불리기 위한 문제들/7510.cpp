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

int n;

int tmp;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 1;i <= n; i ++) {
        vector<int> v;
        for(int j = 0; j < 3; j ++) {
            cin >> tmp;
            v.pb(tmp);
        }
        sort(v.begin(), v.end());
        if (v[2]*v[2] == v[1]*v[1] + v[0]*v[0]) {
            cout << "Scenario #"<<i<<":\nyes\n";
        }
        else {
            cout << "Scenario #"<<i<<":\nno\n";
        }
        if(i != n) {
            cout<<"\n";
        }
    }
}