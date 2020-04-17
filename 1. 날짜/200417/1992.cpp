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

int N;
int board[66][66];

// void cal(int start1, int start2, int end1, int end2) {
//     // 처음부터 끝까지 봤을 때 다 같은 숫자면 그냥 그거 출력
//     // 아니면 괄호 열고 나누기
//     // cout << start1 << "   " << start2 << "   " << end1 << "   " << end2 << "   \n";
//     int keep = board[start1][start2];
//     int tok = 0;
//     for(int i = start1; i <= end1; i ++) {
//         for(int j = start2; j <= end2; j ++) {
//             if (keep != board[i][j]) {
//                 tok = 1;
//                 break;
//             }
//         }
//         if (tok) {
//             break;
//         }
//     }
//     if (!tok) {
//         cout << keep;
//     }
//     else {
//         cout <<"(";
//         int to = (end1-start1+1)/2;
//         cal(start1, start2, start1 + to-1, start2 + to-1);
//         cal(start1, start2 + to, start1 + to -1, start2 + to*2 -1);
//         cal(start1 + to, start2, start1+to*2-1, start2+to-1);
//         cal(start1+to, start2+to, start1+to*2-1, start2+to*2-1);
//         cout <<")";
//     }
// }

//매개변수 4개까지 필요없음
void cal(int start1, int start2, int size) {
    int keep = board[start1][start2], tok = 0;
    for(int i = start1; i <= start1 + size-1 ; i ++) {
        for(int j = start2; j <= start2 + size - 1; j ++) {
            if (keep != board[i][j]) {
                tok = 1;
                break;
            }
        }
        if (tok) {
            break;
        }
    }
    if (!tok) {
        cout << keep;
    }
    else {
        cout <<"(";
        int to = size/2;
        cal(start1, start2, to);
        cal(start1, start2 + to, to);
        cal(start1 + to, start2, to);
        cal(start1 + to, start2 + to, to);
        cout <<")";
    }
}

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    scanf("%d", &N);
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= N; j ++) {
            scanf("%1d", &board[i][j]);
        }
    }
    // cal(1, 1, N, N);
    cal(1, 1, N);
    cout<<"\n";

    return 0;
}