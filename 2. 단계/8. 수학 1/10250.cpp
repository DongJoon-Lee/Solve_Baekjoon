// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
# include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// using namespace std;

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int a, h, w, n;
    scanf("%d", &a);
    for(int i = 0; i < a; i ++) {
        scanf("%d %d %d", &h, &w, &n);
        if ((n-1)/h + 1 >= 10) {
            printf("%d%d\n", (n-1)%h+1, (n-1)/h+1);
        }
        else {
            printf("%d0%d\n", (n-1)%h+1, (n-1)/h+1);
        }
    }
    return 0;
}