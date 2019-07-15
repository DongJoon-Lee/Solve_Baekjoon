# include <stdio.h>
# include <iostream>
using namespace std;

int main (void) {
    int a, score = 0, sum = 0;
    cin >> a;
    char b[a][81];
    int c[a] = {0}, j = 0;
    for(int i = 0; i < a; i ++) {
        scanf("%s", b[i]);
        while (b[i][j] != 0) {
        c[i] ++;
        j ++;
        }
        j= 0;
    }
    for(int i = 0; i < a; i ++) {
        for(int k = 0; k < c[i]; k ++) {
            if (b[i][k] == 'O') {
                score += 1 + sum;
                sum += 1;
            }
            else {
                sum = 0;
            }
        }
        printf("%d\n", score);
        score = 0;
        sum = 0;

    }
}