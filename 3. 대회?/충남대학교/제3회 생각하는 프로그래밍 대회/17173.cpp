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

int N , M, ans = 0;
int board[1001];
vector <int> v;

int main (void) {
    cin >> N >> M;
    for(int i =0 ; i < M; i ++) {
        cin >> board[i];
    }
    for(int i = 0; i < M; i ++) {
        int save = board[i];
        while(board[i] <= N) {
            v.pb(board[i]);
            board[i] += save;
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
    }
    
    for(int i = 0; i < v.size(); i ++) {
        // cout << v[i] << "\n";
        ans += v[i];
    }
    cout << ans << "\n";
}