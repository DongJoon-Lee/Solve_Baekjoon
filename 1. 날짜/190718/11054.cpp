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

int N;
vector <int> v;
int board[1002];
int ansu[1002];
int ansd[1002];
int ans = -1;

int main (void) {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> board[i];
        v.pb(board[i]);
    }
    fill_n(ansu, N, 1);
    fill_n(ansd, N, 1);
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < i; j ++) {
            if (board[j] < board[i] && ansu[i] < ansu[j]+1) {
                ansu[i] = ansu[j] +1;
            }
        }
        for(int j = N-1; N-1-i < j; j --) {
            if (board[N-1-i] > board[j] && ansd[N-1-i] < ansd[j] + 1) {
                ansd[N-1-i] = ansd[j] + 1;
            }
        }
        
    }
    for(int i = 0; i < N; i ++) {
        if (ans < ansu[i] + ansd[i]) {
            ans = ansu[i] + ansd[i];
        }
    }
    cout << ans-1 << "\n";
    


}