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


// 볼링 점수 규칙을 정확하게 이해하는데 시간이 오래 걸렸다!
// 계산 과정을 함수로도 만들 수 있을 것 같은데...


char board[11][4];
int score[12] = {0,};

int main (void) {
    for(int i = 1; i < 11; i ++) {
        fill_n(board[i], 4, '0');
    }
    for(int i = 1; i < 10; i ++) {
        for(int j = 1; j < 3; j ++) {
            cin >> board[i][j];
            if (board[i][j] == 'S') {
                board[i][j+1] = '0';
                break;
            }
        }
        
    }
    cin >> board[10][1];
    if (board[10][1] == 'S') {
        cin >> board[10][2] >> board[10][3];
    }
    else {
        cin >> board[10][2];
        if (board[10][2] == 'P') {
            cin >> board[10][3];
        }
    }
    
    


    // //테스트
    // for(int i = 1; i < 10; i ++) {
    //     for(int j = 1; j < 3; j ++) {
    //         cout << board[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << board[10][1] << " " << board[10][2] << " " << board[10][3] << "\n";
    // //

    for(int i = 1; i < 10; i ++) {
        for(int j = 1; j < 3; j ++) {
            if (49 <=board[i][j] && board[i][j] <= 57) {
                score[i] += board[i][j]-48;
            }
            else if (board[i][j] == 'S') {
                score[i] += 10;
                int tok1 = 1, tok2 = 0;
                for(int k = 0; k < 2; k ++) {
                    tok2++;
                    if (tok2 == 3) {
                        tok2 = 1;
                        tok1++;
                    }
                    if (49 <= board[i+tok1][tok2] && board[i+tok1][tok2]<= 57) {
                        score[i] += board[i+tok1][tok2]-48;
                    }
                    else if (board[i+tok1][tok2] == 'S') {
                        score[i] += 10;
                    }
                    else if (board[i+tok1][tok2] == 'P') {
                        if (board[i+1][tok2-1] == '-') {
                            score[i] += 10;
                            continue;
                        }
                        score[i] += 10-(board[i+tok1][tok2-1]-48);
                    }
                    else if (board[i+tok1][tok2] == '-') {
                        continue;
                    }
                    else {
                        k--;
                    }
                    
                }
                break;
            }
            else if (board[i][j] == 'P') {
                if (board[i][j-1] == '-') {
                    score[i] += 10;
                }
                else {
                    score[i] += 10-(board[i][j-1]-48);
                }
                
                int tok1 = 0, tok2 = 2;
                for(int k = 0; k < 1; k ++) {
                    tok2 ++;
                    if (tok2 == 3) {
                        tok2 = 1;
                        tok1 ++;
                    }
                    if (49 <= board[i+tok1][tok2] && board[i+tok1][tok2] <= 57) {
                        score[i] += board[i+tok1][tok2]-48;
                    }
                    else if (board[i+tok1][tok2] == 'S') {
                        score[i] += 10;
                    }
                    else if (board[i+tok1][tok2] == 'P') {
                        if (board[i+1][tok2-1] == '-') {
                            score[i] += 10;
                            continue;
                        }
                        score[i] += 10-(board[i+tok1][tok2-1]-48);
                    }
                    else if (board[i+tok1][tok2] == '-') {
                        continue;
                    }
                    else {
                        k--;
                    }
                }
            }
        }
    }
    // //테스트
    // for(int i = 1; i < 10; i ++) {
    //     cout << score[i] << " \n";
    // }
    // //

    for(int i = 1; i <= 3; i ++) {
        if (49 <=board[10][i] && board[10][i] <= 57) {
            score[10] += board[10][i] - 48;
        }
        else if (board[10][i] == 'P') {
            score[10] += 10-(board[10][i-1]-48);
        }
        else if (board[10][i] == 'S') {
            score[10] += 10;
        }
    }
    int ans = 0;
    for(int i = 1; i <= 10 ; i ++) {
        ans += score[i];
    }
    cout << ans << "\n";


}


/* 
1   2   3   4   5   6   7   8   9   10
S-  S-  S-  S-  S-  S-  S-  S-  S-  S S S
30  60  90  120 150 180 210 240 270 30


1   2   3   4   5   6   7   8   9   10
9-  8P  72  S   9P  -9  S   -P  9-  SS8
9   26  35  55  65  74  94  113 122 150
//9에서 10번 점수 할 때는 플러스 없이 순수 3개 더한다.
*/