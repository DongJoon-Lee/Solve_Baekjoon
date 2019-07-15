# include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d %d", &a,&b);
    if (b < 45) {
        if (a == 0) {
            a = 24;
        }
        a -= 1;
        b += 60;
    }
    b -= 45;
    printf("%d %d\n", a, b);
}