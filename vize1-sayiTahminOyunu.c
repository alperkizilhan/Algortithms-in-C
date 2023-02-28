#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rastgeleUret(void);
int gecerliMi(int sayi);
int icerirMi(int rastgele, int tahmin, int sira);
void oyna(int rastgele);

int main(void){

   int rastgele, kontrol = 0;
   srand(time(NULL));

   while(kontrol == 0){
       if(gecerli_mi(rastgele = rastgeleUret()))
           kontrol = 1;
   }
   printf("%d\n",rastgele);
   oyna(rastgele);
   return 0;
}

int rastgeleUret(void){
   return rand() % 9000 + 1000;
}

int gecerli_mi(int sayi){
   int temp, i, j;

   for (i = 0; i < 10; i++){
      j = 0;
      temp = sayi;
      while (temp > 0){
         if (temp % 10 == i)
            j++;
         if (j > 1)
            return 0;
         temp /= 10;
      }
   }
   return 1;
}

int icerirMi(int rastgele, int tahmin, int sira){
    int basamak1 = rastgele % 10;
    rastgele /= 10;
    int basamak2 = rastgele % 10;
    rastgele /= 10;
    int basamak3 = rastgele % 10;
    rastgele /= 10;
    int basamak4 = rastgele % 10;

    if(sira == 0 && tahmin == basamak1)
        return 1;
    else if(sira == 0 && (tahmin == basamak2 || tahmin == basamak3 || tahmin == basamak4))
        return 2;
    else if(sira == 1 && tahmin == basamak2)
        return 1;
    else if(sira == 1 && (tahmin == basamak1 || tahmin == basamak3 || tahmin == basamak4))
        return 2;
    else if(sira == 2 && tahmin == basamak3)
        return 1;
    else if(sira == 2 && (tahmin == basamak1 || tahmin == basamak2 || tahmin == basamak4))
        return 2;
    else if(sira == 3 && tahmin == basamak4)
        return 1;
    else if(sira == 3 && (tahmin == basamak1 || tahmin == basamak2 || tahmin == basamak3))
        return 2;

    return 0;

}

void oyna(int rastgele){
    int oyunKontrol = 0, tahmin, i = 1, arti = 0, eksi = 0, bos = 0;

    while(oyunKontrol == 0){
       printf("%d. tahmininizi giriniz: ", i);
       scanf("%d", &tahmin);

       int a,e,j;

        printf(" = ");

           for(j=0;j<4;j++){
               int basamak = tahmin%10;
               if(icerirMi(rastgele, basamak, j) == 1)
                  arti++;
               else if(icerirMi(rastgele, basamak, j) == 2)
                  eksi++;
               else
                  bos++;
               tahmin /= 10;
           }

           if(bos != 4){
               for( a=0;a<arti;a++)
                  printf("+");
               for(e=0;e<eksi;e++)
                  printf("-");
           }

           if(arti == 4)
                oyunKontrol = 1;
           i++;
           arti = 0;
           eksi = 0;
           bos = 0;
           printf("\n");
   }
}


