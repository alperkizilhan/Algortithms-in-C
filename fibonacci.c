#include <stdio.h>

int main(){
    int a[20];
    a[0] = 1;
    a[1] = 1;
    for (int i=2; i<=20; i++) {
        a[i]= a[i-1] + a[i-2];
    }
    for (int i=0; i<21; i++) {
        printf("%d. eleman : %d\n",i,a[i]);
    }
}

