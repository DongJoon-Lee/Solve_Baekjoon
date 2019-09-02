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

int P;
double board[1002];
double tmp, D, A, B, F;

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    cin >> P;
    for(int i = 1; i <= P; i ++) {
        cin >> tmp >> D >> A>>B>>F;
        board[i] = D/(A+B)*F;
    }
    for(int i= 1; i <= P; i++) {
        cout << i << " ";
        printf("%.6lf\n", board[i]);
    }
    return 0;


}