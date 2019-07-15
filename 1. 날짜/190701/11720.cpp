# include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    int b, ans = 0;
    for(int i = 0; i < a; i ++) {
        scanf("%1d", &b);
        ans += b;
    }
    printf("%d\n", ans);
}