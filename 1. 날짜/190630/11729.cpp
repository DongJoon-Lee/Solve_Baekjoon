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

void hanoi(int num, int start, int end, int mid) {
    if (num == 1) {
        printf("%d %d\n", start, end);
    }
    else {
        hanoi(num-1, start, mid, end);
        printf("%d %d\n", start, end);
        hanoi(num-1, mid, end, start);
    }
}