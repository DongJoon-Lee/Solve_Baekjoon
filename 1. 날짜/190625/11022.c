# include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    int b[a][3];
    for(int i = 0; i <a; i ++) {
        scanf("%d %d", &b[i][1], &b[i][2]);
        b[i][0] = b[i][1] + b[i][2];
    }
    for(int i = 0; i < a; i ++) {
        printf("Case #%d: %d + %d = %d\n", i+1, b[i][1], b[i][2], b[i][0]);
    }
}