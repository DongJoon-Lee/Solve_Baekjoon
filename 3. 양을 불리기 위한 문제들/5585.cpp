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

int N, ret;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    N = 1000 - N;
    ret = 0;
    ret += N/500;
    N%=500;
    ret += N/100;
    N%=100;
    ret += N/50;
    N%=50;
    ret += N/10;
    N%=10;
    ret += N/5;
    N%=5;
    ret += N/1;
    N%=1;

    cout << ret<<"\n";
    return 0;
}