//Write a program in C to display the cube of the number up to an integer.
#include<stdio.h>
int main()
{
    int num;
    printf("Input number of items: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        printf("Number is : %d and cube of the %d is :%d \n",i, i, i*i*i);
    }
    return 0;
}
