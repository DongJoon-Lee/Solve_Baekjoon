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
int a;
int b;
int co0, co1;
int board[41];
vector <pair <int, int > > v(41,mp(-1,-1));

void fib(int n) {
    if (v[n].first == -1) {
        if (n == 0) {
            v[0] = mp(1,0);
        }
        else if (n == 1) {
            v[n] = mp(0,1);
        }
        else {
            fib(n-1);
            fib(n-2);
            v[n] = mp(v[n-1].first + v[n-2].first, v[n-1].second + v[n-2].second);
        } 
    }
    
}
int main (void) {
    cin >> a;
    for(int i = 0; i < a ; i++) {
        cin >> b;
        fib(b);
        cout << v[b].first << " " << v[b].second << "\n";
    }
}