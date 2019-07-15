# include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    for(int i = 1; i < a+1; i ++) {
        for(int j = a-i; 0 < j; j --) {
            printf(" ");
        }
        for(int j = i; 0 < j; j --) {
            printf("*");
        }
        printf("\n");
    }
}