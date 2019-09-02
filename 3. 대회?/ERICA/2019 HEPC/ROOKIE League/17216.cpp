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
int board[1002]={0,};
int ans[1002];

int main (void) {
    cin>> N;
    for(int i = 1; i <= N; i ++) {
        cin >> board[i];
        ans[i] = board[i];
    }
    // ans[1]=1;
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j < i; j ++) {
            if (board[j]>board[i] && ans[i] < ans[j]+board[i]) {
                ans[i] = ans[j]+board[i];
            }
        }
    }
    int ret = MIN;
    for(int i = 1; i <=N; i ++) {
        if (ret < ans[i]) {
            ret = ans[i];
            
        }
        // cout << i << " " << ans[i] << "\n";
    }

    cout << ret <<"\n";
    return 0;
}