/*
5 2000000000
900000000 900000000 900000000 900000000 900000000
https://www.acmicpc.net/board/view/41700
*/

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

ll N, M;
ll board[1000002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    fill_n(board, 1000002, 0);
    cin >> N >> M;
    for(int i = 1; i <= N; i ++) {
    	cin >> board[i];
    }
    ll b = 1, e = 2000000000;
    
    ll ans;
    while(b <= e) {
    	//cout << b <<" " << e <<"\n";
    	ll h = (b+e)/2;
    	ans = 0;
    	for(int i = 1 ;i <= N; i ++) {
    		if (board[i]-h >= 0) {
    			ans += board[i]-h;
    		}
    	}
    	//cout << ans <<"\n";
    	if (ans == M) {
    		break;
    	}
    	else if (ans > M) {
    		b = h + 1;
    	}
    	else if (ans < M) {
    		e= h-1;
    	}
    	//cout << ans <<"\n";
    	//cout << b <<" " << e<<"\n";
    }
    //if (b + 1 != e) {
    	cout << (b+e)/2<<"\n";
    //}
    //else {
    //	cout << b <<"\n";
    //}
    //cout << b << " durl" << e <<"\n";
    //cout << b<<"\n";
    	
    return 0;
}
