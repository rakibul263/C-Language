/*Write a program in C to read 10 numbers from the keyboard
and find their sum and average.*/
#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Input 10 numbers:\n");
    for(int i=0;i<10;i++)
    {
        printf("Number-%d :",i+1);
        scanf("%d", &n);
        sum+=n;
    }
    float avg=(float)sum/10;
    printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,avg);

}
