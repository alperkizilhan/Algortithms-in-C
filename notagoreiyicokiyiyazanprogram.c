#include <stdio.h>

int main() {
    int a;
    printf("Notunuzu giriniz: ");scanf("%d",&a);
    switch (a) {
        case 1:
            printf("Çok Zayıf");
        break;
        case 2:
            printf("Zayıf");
        break;
        case 3:
            printf("Orta");
        break;
        case 4:
            printf("İyi");
        break;
        case 5:
            printf("Çok iyi");
        break;
            
        default:
            printf("Geçersiz Not");
            break;
    }
}
