# include <stdio.h>
# include <iostream>
using namespace std;

int main (void) {
    int a, max = -1;
    float sum = 0;
    cin >> a;
    int b[a+1] = {0};
    for(int i = 0; i < a; i ++) {
        cin >> b[i];
        sum += b[i];
        if (max < b[i]) {
            max = b[i];
        }
    }
    sum/=a;
    sum = sum/max*100;
    printf("%.2f", sum);
}