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

int N, K, ret = MIN;
string tmp;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    for(int i = 1; i <= K; i ++) {
        tmp = to_string(N*i);
        reverse(tmp.begin(), tmp.end());
        ret = max(ret, atoi(tmp.c_str()));
    }
    cout << ret << "\n";
    return 0;
}