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

int board[27];



int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;
    fill_n(board, 27, -1);
    for(int i = 0; i < a.length(); i ++) {
        if (board[a[i]-97] == -1) {
            board[a[i]-97] = i;
        }
    }
    for(int i = 0; i < 26; i ++) {
        cout << board[i] <<" ";
    }
    cout<<"\n";
    return 0;
}
