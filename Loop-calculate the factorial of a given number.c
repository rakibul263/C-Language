#include<stdio.h>
int main()
{
    int num,sum=1,i;
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        sum=(sum*i);
    }
    printf("The factorial of %d is : %d\n",num, sum);
    return 0;
}
