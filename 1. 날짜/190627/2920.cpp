# include <stdio.h>
# include <iostream>
using namespace std;

int main (void) {
    int a[10];
    int b[8] = {1,2,3,4,5,6,7,8};
    int c = 0;
    for(int i = 0; i < 8; i ++) {
        cin >> a[i];
    }
    if(a[c] == b[c]) {
        c++;
        for(int i = 2; i <8; i ++) {
            if (a[c] != b[c]) {
                printf("mixed\n");
                return 0;
            }
            c++;
        }
        printf("ascending\n");
    }
    else if (a[c] == b[7-c]) {
        c++;
        for(int i = 2; i < 8; i ++) {
            if (a[c] != b[7-c]) {
                printf("mixed\n");
                return 0;
            }
            c++;
        }
        printf("descending\n");

    }
    else {
        printf("mixed\n");
    }

}