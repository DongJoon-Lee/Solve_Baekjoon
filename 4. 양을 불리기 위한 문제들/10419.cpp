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
int board[10002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i = 0; i <T; i ++) {
        cin >> tmp;
        for(int i = 1; i < 1000; i ++) {
            if (tmp < i*(i+1)) {
                cout << i-1<<"\n";
                break;
            }
        }

    }
    return 0;
}