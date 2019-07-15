# include <stdio.h>
# include <iostream>
using namespace std;

int main (void) {
    int a[10];
    int max = -1, maxidx = -1;
    for(int i = 0; i < 9; i ++) {
        cin >> a[i];
        if (max < a[i]) {
            max = a[i];
            maxidx = i;
        }
    }
    printf("%d\n%d\n", max, maxidx+1);

}