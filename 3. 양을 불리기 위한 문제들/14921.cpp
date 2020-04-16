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

int N;
ll tmp, mi=MAX;
int board[100005];
ll ret=MAX;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> board[i];
    }

    int i = 0;
    int j = N-1;
    while(i<j) {
        tmp = board[i]+board[j];
        if (llabs(tmp) < llabs(ret)) {
            ret = tmp;
        }
        if (tmp < 0) {
            i++;
        }
        else {
            j--;
        }
    }

    cout<<ret<<"\n";

}