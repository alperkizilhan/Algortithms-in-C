#include <stdio.h>

int main(){
    int a= 1;
    int b;
    printf("sayı girin: ");scanf("%d", &b);
    int flag= 0;
    for(int a=2;a<b-1;a++){
        if (b%a== 0) {
            flag=1;
            break;
        }
    }
        if (flag==0)
            printf("%d sayısı asal sayıdır.", b);
        else
            printf("%d sayısı asal değildir.", b);
        
}


