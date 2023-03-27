#include<stdio.h>
int main()
{
    int odd,i,sum=0;
    printf("Input number of terms: ");
    scanf("%d",&odd);

    printf("The odd number are: ");
    for (i=1;i<=odd;i++)
    {
        if (i%2!=0)
        {
             printf("%d, ",i);
             sum+=i;
        }

        printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",odd,sum);
    }

}
