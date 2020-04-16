# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, cou0=0, cou1=0, cou2=0;
int board[2200][2200];
    
void cal(int start, int start2, int end, int end2) {
    // cout << start << "   " << start2 << "    " << end << "    " << end2 << "   \n";
    if (start == end) {
        if (board[start][start2] == -1) {
            cou0++;
        }
        else if (board[start][start2] == 0) {
            cou1 ++;
        }
        else {
            // cout << start << "   " << start2 << "   " << end << "   " << end2 << "   \n";
            cou2 ++;
        }
    }
    else {
        int tok = 0;
        int keep = board[start][start2];
        for(int i = start; i <= end; i ++) {
            for(int j = start2; j <= end2; j ++) {
                if (keep != board[i][j]) {
                    tok = 1;
                    break;
                }
            }
            if (tok) {
                break;
            }
        }
        if (tok) {
            int to = (end - start + 1)/3;
            cal(start, start2, start + to-1, start2 + to-1);
            cal(start + to, start2, start + to*2-1, start2+to-1);
            cal(start + to*2, start2, start + to*3-1, start2 + to-1);
            cal(start, start2+to, start + to-1, start2 + to*2-1);
            cal(start+to, start2 + to, start + to*2-1, start2 + to*2-1);
            cal(start+to*2, start2 + to, start + to*3-1, start2 + to*2-1);
            cal(start, start2 + to*2, start + to-1, start2 + to*3-1);
            cal(start+to, start2 + to*2, start + to*2-1, start2 + to*3-1);
            cal(start+to*2, start2 + to*2, start + to*3-1, start2 + to*3-1);
            // cal(start, start2, start + to, start + to);
            // cal(start + to, start2, start + to*2, start + to);
            // cal(start + to*2, start2, start + to*3, start + to);
            // cal(start, start2 + to, start + to, start + to*2);
            // cal(start + to, start2 + to, start + to*2, start2 + to*2);
            // cal(start + to*2, start2 + to, end/3 + to*2, end2/3 + to);
            // cal(start, start2 + to*2, end/3, end2/3 + to*2);
            // cal(start + to, start2 + to*2, end/3 + to, end2/3 + to*2);
            // cal(start + to*2, start2 + to*2, end/3 + to*2, end2/3 + to*2);
        }
        else {
            if (keep == -1) {
                cou0 ++;
            }
            else if (keep == 0) {
                cou1 ++;
            }
            else {
                // cout << start << "   " << start2 << "   " << end << "   " << end2 << "   \n";
                cou2 ++;
            }
        }
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= N; j ++) {
            cin >> board[i][j];
        }
    }
    cal(1, 1,N, N);
    cout << cou0 <<"\n" << cou1 <<"\n" << cou2 <<"\n";

    return 0;
}