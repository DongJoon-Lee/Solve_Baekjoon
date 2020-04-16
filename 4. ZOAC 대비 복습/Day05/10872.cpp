# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int fact(int N) {
    if (N == 0) {
        return 1;
    }
    return N*fact(N-1);
}

int main (void) {
    int N;
    scanf("%d", &N);
    printf("%d\n", fact(N));
}