#include <stdio.h>
int main() {
    int i,j;
    float x;
    float dogal=0, sayi=1;
    printf("Lütfen (0,2] arası bir değer giriniz: ");
    scanf("%f",&x);
    if (x>0 && x<=2) {
        for(i=1;i<=5;i++) {
        sayi=1;
        for(j=0;j<=i;j++) {
            sayi = sayi * ((x-1.0)/2.0);
        }
        dogal = (1.0/2) * sayi+ dogal;
    }
    dogal=dogal + (float)(x-1.0)/x;
    printf("%f sayisinin dogal logairtmasi= %f\n",x, dogal);
}
    else
        printf("Hatalı Giris!\nLütfen (0,2] arasında bir değer giriniz.\n");
}
