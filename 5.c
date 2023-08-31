#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d", &n);
    n=n-2;


          //first upper pyrimid

     for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
                printf(" ");

        }
        for(col=1; col<=2*row-1; col++){
            printf("*");
        }

        //second upper pyramid

        for(col=1; col<=n-row; col++){
                printf("  ");

        /*for(col=1; col<=n-row; col++){
                printf("  ");*/

        }
        for(col=1; col<=2*row-1; col++){
            printf("*");
        }
        printf("\n");
    }
    //for lower pyramid

     for(row=n-1; row>=1; row--){

            //first lower pyramid

        for(col=1; col<=n-row; col++){
                printf(" ");

        }
        for(col=1; col<=2*row-1; col++){
            printf("*");
        }

        //second lower pyramid

        for(col=1; col<=n-row; col++){
                printf("  ");

        }
        for(col=1; col<=2*row-1; col++){
            printf("*");
        }
        printf("\n");
    }


return 0;
}

