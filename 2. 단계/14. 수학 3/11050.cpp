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
int save[11];
int fact(int a) {
    if (a == 1||a==0) {
        return 1;
    }
    else if (save[a] != 0) {
        return save[a];
    }
    else {
        save[a] = fact(a-1)*a;
        return save[a];
    }
}

int main (void) {
    fill_n(save, 11, 0);
    cin >> N >> K;
    cout << fact(N)/(fact(K)*fact(N-K)) << "\n";
    return 0;
}