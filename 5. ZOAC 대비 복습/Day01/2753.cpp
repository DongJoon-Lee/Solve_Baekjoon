# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    if(a%400 == 0 || a%4 == 0 && a % 100 != 0) {
        cout <<"1\n";
    }
    else {
        cout <<"0\n";
    }

    return 0;
}
