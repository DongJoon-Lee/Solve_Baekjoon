# include <stdio.h>
# include <iostream>
using namespace std;

int main (void) {
    int a,c, sum = 0;
    float num = 0;
    cin >> a;
    int b[a+1][1001] = {{0}};
    for(int i = 0; i < a; i ++) {
        cin >> c;
        for(int j = 0; j < c; j ++) {
            cin >> b[i][j];
            sum += b[i][j];
        }
        sum /= c;
        for(int k = 0; k < c; k ++) {
            if (b[i][k] > sum) {
                num ++;
            }
        }
        num /= c;
        num *= 100;
        printf("%.3f%%\n", num);
        num = 0;
        sum = 0;
    }
}