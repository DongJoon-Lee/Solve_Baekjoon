# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <cstdio>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int board[30], ma = MIN;
string str;


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fill_n(board, 30, 0);
    while(cin >> str) {
        for(int i = 0; i <str.size(); i ++) {
            board[str.at(i)-97]++;
            ma = max(ma, board[str.at(i)-97]);
        }
        str="";
    }
    for(int i = 0; i < 26; i ++) {
        if (board[i] == ma) {
            cout<<(char)(i+97);
        }
    }
    cout<<"\n";
    return 0;
}