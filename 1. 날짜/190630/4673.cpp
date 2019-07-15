# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;

const int MAX = 2147483647;
const int MIN = -2147483648;

int fact(int i) {
    if (i == 0) {
        return 1;
    }
    return i * fact(i-1);
}

int main (void) {
    int a;
    cin >> a;
    printf("%d\n", fact(a));
}