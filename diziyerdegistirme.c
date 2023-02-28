#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5};
    for (int i=0; i<5; i++) {
        printf("a[%d] = %d\n",i,a[i]);
    }
    int temp;
    for (int i=0; i<2; i++) {
        temp = a[i];
        a[i] = a[4-i];
        a[4-i] = temp;
    }
    printf("\n");
    for (int i=0; i<5; i++) {
        printf("a[%d] = %d\n",i,a[i]);
    }
}
