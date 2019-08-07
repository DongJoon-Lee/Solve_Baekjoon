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

int M, N;
int board[502][502];
int save[502][502];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int cal(int a, int b) {
    if (a==1 && b == 1) {
        return 1;
    }
    if (save[a][b] != -1) {
        return save[a][b];
    }

    if (save[a][b] == - 1) {
        save[a][b] ++;
    }
    
    int xx, yy;
    for(int i = 0; i < 4; i ++) {
        yy = a + dir[i][0];
        xx = b + dir[i][1];
        if ((0<xx&&xx<=N && 0 < yy && yy <= M) && board[a][b] < board[yy][xx]) {
            // cout << "yy " << yy << "  xx " << xx << "\n";
            save[a][b] += cal(yy, xx);
        }
    }
    return save[a][b];

}

int main (void) {
    cin >> M >> N;
    for(int i = 1; i <= M; i ++) {
        for(int j = 1; j <= N; j ++) {
            cin >> board[i][j];
            save[i][j] = -1;
        }
    } 
    cout << cal(M, N) << "\n"; // 
    // for(int i = 1; i <= M; i ++) {
    //     for(int j = 1; j <= N; j ++) {
    //         // cout << save[i][j] << " " ;
    //     }
    //     cout << "\n";
    // }
    return 0;
}