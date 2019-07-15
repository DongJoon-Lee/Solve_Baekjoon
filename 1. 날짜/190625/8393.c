# include <stdio.h>

int main (void) {
    int a, sum = 0;
    scanf("%d", &a);
    while(a != 0) {
        sum += a;
        a --;
    }
    printf("%d\n", sum);
}