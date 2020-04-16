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

int N, K;
string str[102];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> str[i];
    }
    cin >> K;
    if(K == 1) {
        for(int i = 0; i < N; i ++) {
            cout << str[i]<<"\n";
        }
    }
    else if (K == 2) {
        for(int i = 0 ;i < N ;i ++) {
            for(int j = 0; j < N; j ++) {
                cout<<str[i][N-j-1];
            }
            cout<<"\n";
        }
    }
    else {
        for(int i = 0; i < N; i++) {
            cout << str[N-i-1]<<"\n";
        }
    }
}