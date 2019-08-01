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

int N, K;
int board[12] = {0,};
int ans=0;
// int find(int a, int b) {
//     int mid = (b+a)/2;
//     if ()
// }

int main (void) {
    cin >> N >> K;
    // int board[N+1] = {0,};
    int tok = -1;
    for(int i = 0;i < N; i ++) {
        cin >> board[i];
        if (board[i] <= K) {
            tok = i;
        }
    }
    while(K != 0) {
        ans += K/board[tok];
        K %= board[tok];
        tok--;
    }
    cout << ans << "\n";

    

}