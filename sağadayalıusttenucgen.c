#include <stdio.h>

int main(){
    int i,j;
    int basamak;
    printf("Kac basamak olsun: ");scanf("%d", &basamak);
    for (j= basamak; j>=0; j--) {
        for (i=0; i<j; i++) {
            printf(" ");
        }
        for (i=0; i<=basamak-j; i++) {
            printf("*");
        }
        printf("\n");
    }
}
