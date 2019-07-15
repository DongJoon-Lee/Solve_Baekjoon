# include <stdio.h>

int main (void) {
    int a[10001], b=-1, c=-1, i = 0;
    while(b != 0 && c != 0){
        scanf("%d %d", &b, &c);
        a[i] = b + c;
        i ++;
    }
    for(int j = 0; j < i-1; j ++) {
        printf("%d\n", a[j]);
    }
}