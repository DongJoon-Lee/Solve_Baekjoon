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


int a, b, c;
int m, n;
int board[1002];
//전체 길이를 기준으로 가운데부터, n개의 조각으로 나눌 수 있는지 확인하고 안되면 -1씩 하여 n개 조각으로 나눌 수있는 가장 큰 값을 구합니다.
int main (void) {
    cin >> a >> b >> c;
    board[0] = 0;
    board[b+1] = c;
    for(int i = 1; i <= b; i ++) {
        cin >> board[i];
    }
    for(int i = 0; i < a; i ++) {
        cin>> m;
        int mid, keep = 0, count = m+1;
        int start=0, end=c, ret=-1;
        while(start <= end) {
            mid = (start + end)/2;
            keep = 0;
            count = m+1;
            for(int j = 1; j < b+2; j ++) {
                if (board[j] - keep >= mid) {
                    keep = board[j];
                    // cout << "여기1 " << keep << "\n"; 
                    count--;
                }
            }
            if (count <= 0) {
                start = mid + 1;
                ret = max(ret, mid);
            }
            else {
                end = mid-1;
            }
        }
        
        cout << ret << "\n";
    }
    return 0;
}
