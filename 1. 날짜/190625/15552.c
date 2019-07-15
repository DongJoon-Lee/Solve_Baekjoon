# include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    int b[a];
    for(int i = 0; i < a; i ++) {
        int c, d;
        scanf("%d %d", &c, &d);
        b[i] = c + d;
    }
    for(int i = 0; i < a; i ++) {
        printf("%d\n", b[i]);
    }
}