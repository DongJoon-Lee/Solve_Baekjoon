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

int n, tmp;
vector <int> v;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> tmp;
        v.pb(tmp);
    }
    sort(v.begin(), v.end());
    tmp=0;
    for(int i = 0;i < v.size()-1; i ++) {
        tmp += v[i];
    }
    cout << tmp<<"\n";
}