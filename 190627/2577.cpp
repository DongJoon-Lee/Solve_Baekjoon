# include <stdio.h>
# include <iostream>
using namespace std;

int main (void) {
    int a, b, c,d;
    int count[11] = {0};
    int base = 10, tok = 0;
    cin >>a>>b>>c;
    d = a * b * c;
    while (d / base != 0) {
        count[(d % base)/(base/10)] ++;
        base *= 10;
    }
    count[d/(base/10)] ++;
    for(int i = 0; i < 10; i ++) {
        printf("%d\n", count[i]);
    }
    
}