#include <stdio.h>

int main(){
    int yas=0;
    int toplam=0;
    int say=0;
    while (yas>=0) {
        toplam= toplam+ yas;
        say++;
        printf("Yas giriniz: ");scanf("%d",&yas);
    }
    say--;
    printf("\nortalama yas: %f\n",(float)toplam/ (float) say);
}
