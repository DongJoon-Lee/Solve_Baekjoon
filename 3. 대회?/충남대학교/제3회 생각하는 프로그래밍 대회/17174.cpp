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
int N, M, ans = 0, abc;

int main (void) {
    cin >> N >> M;
    while(N != 0) {
        ans+= N;
        N/= M;
    }
    cout << ans << "\n";

}