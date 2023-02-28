#include <stdio.h>

int main(void) {
    int girilen;
    int enbuyuk=0;
    for (int i=0; i<3; i++) {
        printf("sayı giriniz -> ");scanf("%d", &girilen);
        if (girilen> enbuyuk)
            enbuyuk= girilen;
        printf("suanki en buyuk sayı %d\n",enbuyuk);
    }
    printf("en buyuk sayı: %d\n",enbuyuk);
}


