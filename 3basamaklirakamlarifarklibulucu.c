#include <stdio.h>

int main(){
    int a,b,c,i,sayac;
    sayac=0;
    for (i=100; i<999; i++) {
        a=i/100;
        b=(i-(a*100))/10;
        c=i-((a*100)+(b*10));
        if (a!=b && b!=c && a!=c) {
            sayac++;
        }
        }
    printf("%d\n",sayac);
    }
    
    
