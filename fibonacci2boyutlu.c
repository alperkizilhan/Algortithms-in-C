#include <stdio.h>

int main(){
    int n;
    printf("Matrisin boyutunu giriniz: ");scanf("%d",&n);
    int a=1;
    int b=1;
    for (int i=0; i<n; i++){
        int p=a;
        int q=b;
        for (int j=0; j<n; j++) {
            int r = p+q;
            printf("%d ",p);
            p=q;
            q=r;
        }
        printf("\n");
        int c= a+b;
        a=b;
        b=c;
    }
}
