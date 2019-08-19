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

int N, gcd;
int board[102];

int findGcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGcd(b, a%b);
}

int main (void) {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> board[i];
    }
    for(int i = 1; i < N; i ++) {
        gcd = findGcd(board[0], board[i]);
        cout << board[0]/gcd << "/" << board[i]/gcd << "\n";
    }
    return 0;
}