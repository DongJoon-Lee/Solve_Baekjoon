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


int main (void) {
    int num, max = MIN, min = MAX;
    cin >> num;
    int list[num+1];
    for(int i = 0; i < num; i ++) {
        cin >>list[i];
        if (max < list[i]) {
            max = list[i];
        }
        if (list[i] < min) {
            min = list[i];
        }
    }
    printf("%d %d\n", min, max);


}