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

    vector <int> v;

    int N, tmp;
    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> tmp;
        v.pb(tmp);
    }
    sort(v.begin(), v.end());

    cout << v[0]<<" " << v[N-1] <<"\n";

    return 0;
}
