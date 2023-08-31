#include<stdio.h>
int main(){
    int r,c,row,col;
    scanf("%d %d", &r, &c);
    for(row=0; row<r; row++){
        for(col=0; col<c; col++){
            if(col==0 || col==c-1 || row==0 || row==r-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


return 0;
}
