#include <stdio.h>

int main()
{
    int sayi,i,toplam=0;
    printf("sayiyi gir : ");
    scanf("%d",&sayi);
    for(i=1;i<=sayi/2;i++)
    {
        if(sayi%i==0)
        {
            toplam=toplam+i;
        }
    }
    if(toplam==sayi)
        printf("%d sayisi mukemmel sayidir",sayi);
    else{
        printf("girilen sayi mukemmel degil");
        }

    return 0;
}
