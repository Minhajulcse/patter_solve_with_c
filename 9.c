#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d", &n);
    n=n-2;
    for(row=n; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++){
            printf("@");
        }
        printf("\n");
    }
    for(row=2; row<=n; row++){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++){
            printf("@");
        }
        printf("\n");
    }



return 0;
}
