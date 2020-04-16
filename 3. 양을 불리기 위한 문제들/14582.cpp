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

int board[3][11], cou1=0,cou2=0;
bool tok=0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 1; i < 3; i ++) {
        for(int j = 1; j < 10;j  ++) {
            cin >> board[i][j];
        }
    }

    for(int j = 1; j < 10; j ++) {
        for(int i = 1; i < 3; i ++) {
            if(i == 1) {
                cou1 += board[i][j];
            }
            else {
                cou2 += board[i][j];
            }
            if (cou1 > cou2) {
                tok = 1;
            }
        }
    }
    if(tok) {
        cout <<"Yes\n";
    }
    else {
        cout << "No\n";
    }

}