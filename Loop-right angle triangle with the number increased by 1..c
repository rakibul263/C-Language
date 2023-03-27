#include<stdio.h>
int main()
{
    int i,j,rows,a=1,spc;
    scanf("%d",&rows);
    spc=rows+4-1;
    for(i=1; i<=rows; i++){
        for(int k=spc; k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i; j++){
            printf("%d ",a++);
        }
        printf("\n");
        spc--;
    }
}
