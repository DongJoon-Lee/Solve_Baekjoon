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

ll N;
int board[7] = {0,};

int main (void) {
    cin >> N >> board[0];
    if (N >= 6) {
        cout << "Love is open door\n";
    }
    else {
        int a = 1;
        int count = 1;
        if (board[0] == 0) {
            while(count < N) {
                cout << a << "\n";
                if (a) {
                    a = 0;
                }
                else {
                    a = 1;
                }
                count++;
            }
        }
        else {
            a = 0;
            while(count < N) {
                cout << a <<"\n";
                if (!a) {
                    a = 1;
                }
                else {
                    a = 0;
                }
                count ++;
            }
        }
    }
    return 0;

}