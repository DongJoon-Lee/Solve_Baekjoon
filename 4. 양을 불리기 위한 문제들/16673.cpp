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

int C, K, P, ret;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> C >> K >> P;
    cout << K*C*(C+1)/2 + P*C*(C+1)*(2*C+1)/6<<"\n";

}