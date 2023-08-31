#include <stdio.h>
int main(){
    int r,c;
    scanf("%d", &r);
    for(int row=0; row<r; row++){
        for(int col=0; col<(pow(2,row)); col++){
            printf("*");
        }
        printf("\n");
    }




return 0;
}
