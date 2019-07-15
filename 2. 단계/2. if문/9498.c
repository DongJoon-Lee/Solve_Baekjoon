# include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    a/= 10;
    switch (a) {
        case 10:
        case 9 :
            printf("A\n");
            break;
        case 8 :
            printf("B\n");
            break;
        case 7 :
            printf("C\n");
            break;
        case 6 :
            printf("D\n");
            break;
        default :
            printf("F\n");
    }
}