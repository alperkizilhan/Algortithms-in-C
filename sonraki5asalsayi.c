#include <stdio.h>

int main(){
    int d,i,sayi,sayac=0;
    printf("sayi giriniz : ");
    scanf("%d",&sayi);
    for (d=sayi; ; d++)
    {
        int flag= 0;
        for ( i=2; i<d; i++) {
            if (d%i==0) {
                flag=1;
            }
        }
        if(flag==0){
            sayac++;
            printf("%d\n",d);
        }
        if(sayac==5)
            break;
      }
}
