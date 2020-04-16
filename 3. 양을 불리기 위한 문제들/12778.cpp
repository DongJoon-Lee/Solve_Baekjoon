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

int T, M, tmpi;
char W, tmp;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i = 0; i < T; i ++) {
        cin >> M >> W;
        if (W == 'C') {
            for(int i = 0; i < M; i ++) {
                cin >> tmp;
                cout << tmp-64<<" ";
            }
        }
        else {
            for(int i = 0; i < M; i ++) {
                cin >> tmpi;
                cout << (char)(tmpi+64)<<" ";
            }
        }
        cout << "\n";
    }

}