#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d", &n);
    for(row=1; row<=n; row++){
        for(col=1; col<=n; col++){
            if(col==1 || col==n || row==1 || row==n){
                printf("@");
            }
            else if((row%2==1 && col%2==0) || (row%2==0 && col%2==1)){
                printf(" ");
            }
            else{
                printf("@");
            }
        }
        printf("\n");
    }



return 0;
}
