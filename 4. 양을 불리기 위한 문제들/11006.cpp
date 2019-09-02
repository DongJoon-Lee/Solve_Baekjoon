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

int T, N, M;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i =0; i < T; i ++) {
        cin >> N >> M;
        cout << M*2-N << " " << M - (M*2-N)<<"\n";
    }
    return 0;

}