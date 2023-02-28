#include <stdio.h>
#include <math.h>

int main(void) {
    int koorDizi[10],i,j,k,l,m=0;float okMatris[5][5];
       for(i=0;i<10;i+=2){
        printf("%d. koordinatin x ve y degerini giriniz : ",m+1);
        scanf("%d %d",&koorDizi[i],&koorDizi[i+1]);
        m++;
        }
     printf("\n--------------------------------------------------\n");
    for(j=0;j<10;j++){
        printf("  %d  ",koorDizi[j]);}
    printf("\n--------------------------------------------------\n\n");
    int a=0,b=0,c=1,d=1;
    for(k=0;k<5;k++){
        for(l=0;l<5;l++){
            okMatris[l][k]=sqrt(pow((koorDizi[a]-koorDizi[b]),2)+pow((koorDizi[c]-koorDizi[d]),2));
            printf("%f  ",okMatris[k][l]);
            a+=2;c+=2;
        }
    a=0;c=1;
    b+=2;d+=2;
    printf("\n");
    }
    return 0;
}
