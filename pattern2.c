#include <stdio.h>
int main(){
    int n,col,row,x;
    scanf("%d", &n);
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
                if(col%2==0){
                    x = 0;
                }
                    else{
                            x=1;


                }
            printf("%d ", x);
        }
        printf("\n");
    }




return 0;
}

