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

string str1, str2;
int board[45][45];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i <45; i ++) {
        fill_n(board[i],45,0);
    }
    int ma=0;
    cin >> str1 >> str2;
    for(int i = 1; i <= str1.size(); i ++) {
        for(int j = 1; j <= str2.size();j ++) {
            if (str1.at(i-1) == str2.at(j-1)) {
                board[i][j] = board[i-1][j-1]+1;
                if(ma < board[i][j]) {
                    ma = board[i][j];
                }
            }
            else {
                board[i][j] = max(board[i-1][j], board[i][j-1]);
            }
        }
    }
    string ret="";
    int look=ma-1;
    int ttt = str2.size();

    for(int i = str1.size();0<i;i--) {
        for(int j = ttt;0<j; j--) {
            if (board[i][j] == ma && board[i-1][j]==look && board[i][j-1]==look && board[i-1][j-1] == look) {
                ma--;
                look--;
                ret = str1.at(i-1) + ret;
                ttt = j;
                break;
            }
        }
    }
    
    cout<<ret<<"\n";
    return 0;

}