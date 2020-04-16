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
char board[205][205];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1; i <= N*2+1; i ++) {
        for(int j= 1; j <= N+1; j ++) {
            if (i%2==1) {
                if (j%2==1) {
                    board[i][j] = '*';
                }
                else {
                    board[i][j] = ' ';
                }
            }
            else {
                if (j%2==0) {
                    board[i][j] = '*';
                }
                else {
                    board[i][j] = ' ';
                }
            }
        }
    }
    if (N == 1) {
        cout <<"*\n";
    }
    else {
        for(int i = 1; i <= N*2; i ++) {
            for(int j= 1; j <= N; j++) {
                cout << board[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
    
}