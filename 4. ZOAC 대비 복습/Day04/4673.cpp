# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int board[100002];

void ans(int a) {
    int s1, s2, s3, s4, s5;
    string nums;
    ll num = a;
    while(a <= 10000) {
        nums = to_string(a);
        for(int i = 0; i < nums.length(); i ++) {
            a += nums[i]-48;
        }
        // cout << a<<"\n";
        if (a <= 10000) {
            board[a] = 1;
        }
        
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fill_n(board, 100002, 0);
    for(int i = 1; i <= 10000; i ++) {
        ans(i);
    }
    for(int i = 1; i <= 10000; i ++) {
        if (board[i] == 0) {
            cout << i<<"\n";
        }
    }

    return 0;
}
