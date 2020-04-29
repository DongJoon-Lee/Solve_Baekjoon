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

int N, M;
ll board[10002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    fill_n(board, 10002, 0);
    cin >> N;
    for(int i = 1; i <= N; i ++) {
    	cin >> board[i];
    }
    cin >> M;
    ll b = 1, e = 2000000000;
    ll h;
    while(b+1<e) {
    	h = (b + e)/2;
    	ll sum = 0;
    	for(int i = 1; i <= N; i ++) {
    		if (h >= board[i]) {
    			sum += board[i];
    		}
    		else {
    			sum += h;
    		}
    	}
    	if (sum == M) {
    		break;
    	}
    	else if (sum > M) {
    		e = h;
    	}
    	else {
    		b = h;
    	}
    }
    ll ans = 0;
    //cout << b << " " << e <<"\n";
    //cout << h <<"\n";
    h = (b+e)/2;
    for(int i = 1; i <= N; i ++) {
    	ans = max(ans, board[i] > h ? h : board[i]);
    }
    //cout << (b+e)/2<<"\n";
    cout << ans <<"\n";
    return 0;
}
