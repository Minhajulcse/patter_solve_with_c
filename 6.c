#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d", &n);

    for(row=1; row<=n; row++){

        for(col=1; col<=row; col++){
                if(row%2==1){
                     printf("#");
                }
                else if(row%2==0){
                    printf("&");
                }

        }
        for(col=1; col<=n-row; col++){
                printf("  ");

        }
        for(col=1; col<=row; col++){
                if(row%2==1){
                     printf("#");
                }
                else if(row%2==0){
                    printf("&");
                }

        }
        printf("\n");
    }





   /* for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
                printf(" ");

        }
        for(col=1; col<=row; col++){
                if(row%2==1){
                     printf("#");
                }
                else if(row%2==0){
                    printf("&");
                }

        }
        printf("\n");
    }*/



return 0;
}
