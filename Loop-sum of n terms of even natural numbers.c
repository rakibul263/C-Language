#include <stdio.h>
int main()
{
    int even,i,sum=0;
    printf("Input number of terms: ");
    scanf("%d",&even);
    printf("The even numbers are: ");
    for(i=1;i<even;i++){
            printf("%d, ", i*2);
            sum=sum+(2*i);
    }
    printf("%d",i*2);
    printf("\nThe Sum of even Natural Number upto %d terms : %d \n",even,sum);
    return 0;
}
