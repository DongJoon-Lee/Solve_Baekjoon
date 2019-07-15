# include<stdio.h>

int main (void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int c[a];
    for(int i = 0; i <a; i ++) {
        scanf("%d", &c[i]);
    }
    for(int i = 0; i < a; i ++) {
        if (c[i] < b) {
            printf("%d ", c[i]);
        }
    }
    printf("\n");
}