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

int N, tmp, ret=0;
vector <int > v;

int main (void) {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> tmp;
        v.pb(tmp);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i ++) {
        ret += v[i] * (v.size()-i);
    }
    cout << ret << "\n";
}