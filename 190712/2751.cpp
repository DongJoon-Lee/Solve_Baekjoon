# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;

const int MAX = 2147483647;
const int MIN = -2147483648;
int a;
int board[1000001] = {0};

void sort(int a, int b) {
    if (b-a == 1) {
        int tmp;
        tmp = board[a];
        board[a] = board[b];
        board[b] = tmp;
    }
    else if (b != a) {
        sort(a, (a+b)/2);
        sort((a+b)/2, b);
    }

}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    for(int i = 0; i < a; i ++) {
        cin >> board[i];
    }
    sort(0, a/2);
    sort(a/2+1, a-1);
    for(int i = 0;i < a; i ++) {
        cout << board[i] << "\n";
    }
}