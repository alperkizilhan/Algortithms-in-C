#include <stdio.h>

int main(){
    for (int d=1; d<=1000; d++) {
        int p= 0;
        for (int i=2; i<d; i++) {
            if (d%i==0) {
                p=1;
            }
        }
        if(p==0){
            printf("%d\n",d);
            
        }
    }
}

