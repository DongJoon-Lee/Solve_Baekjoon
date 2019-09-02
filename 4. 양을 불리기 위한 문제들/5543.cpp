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

int tmp, ham=MAX, soda=MAX;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 3; i ++) {
        cin >> tmp;
        ham = min(tmp, ham);
    }
    for(int j = 0; j < 2; j ++) {
        cin >> tmp;
        soda = min(tmp, soda);
    }
    cout << soda + ham - 50 <<"\n";
    return 0;
}