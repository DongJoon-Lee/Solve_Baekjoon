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

int board[3], tmp;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 1; i <= 3; i ++) {
        fill_n(board, 3, 0);
        for(int j = 1; j <= 4; j ++) {
            cin >> tmp;
            if(tmp == 1) {
                board[1] ++;
            }
            else {
                board[0]++;
            }
        }
        if (board[0] == 1) {
            cout << "A\n";
        }
        else if (board[0] == 2) {
            cout << "B\n";
        }
        else if (board[0] == 3) {
            cout << "C\n";
        }
        else if (board[0] == 4) {
            cout << "D\n";
        }
        else  {
            cout << "E\n";
        }
    }
    return 0;
}