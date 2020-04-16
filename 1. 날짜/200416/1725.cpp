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
int board[100002];

int cal(int start, int end) {
    if (start == end) {
        return board[start];
    }
    if (start +1 == end) {
        int abc = (board[start]>board[end]?board[end]:board[start])*2;
        int bcd = board[start]>board[end]?board[start]:board[end];
        return abc>bcd?abc:bcd;
    }
    int mid = (start + end)/2;
    int res = cal(start, mid) > cal(mid, end)? cal(start, mid):cal(mid, end);

    int left = mid, right = mid, height = board[mid], width = 1;
    while(right - left < end - start) {
        int l = left > start ? min(board[left-1], height):-1;
        int r = right < end ? min(board[right+1], height) : -1;
        if (l >= r) {
            left --;
            // width ++; // 이것도 정리 가능하구나
            height = l;
        }
        else {
            right ++;
            // width ++;
            height = r;
        }
        res = max(res, ++width*height);
    }
    return res;
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fill_n(board, 100002, 0);
    cin >> N;
    for(int i = 1; i <= N; i ++) {
        cin >> board[i];
    }
    cout << cal(1, N)<<"\n";

    return 0;
}