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
int board[100001];
int coin[] = {1,2,5,7};

int main (void) {
    fill_n(board, 100001, MAX);
    cin >> N;
    board[0]=0;
    for(int i = 0; i < 4; i ++) {
        for(int j = coin[i]; j <= N; j ++) {
            board[j] = min(board[j], board[j-coin[i]]+1);
        }
    }
    cout << board[N]<<"\n";
    return 0;
}