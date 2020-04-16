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

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >>c;
    cout << (a+b)%c<<"\n"<<(a%c+b%c)%c<<"\n"<<(a*b)%c<<"\n"<<(a%c*b%c)%c<<"\n";

    return 0;
}
