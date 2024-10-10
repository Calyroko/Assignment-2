//for loop oitpit numbers from 1 to 30
#include <stdio.h>
int main()
{
    int i;
    int sum = 0;
    int start;
    int stop;
    
    printf("enter the value of when to start");
    scanf("%d" ,&start);
    printf("enter the value of when to stop ");
    scanf("%d" ,&stop);
    for (i = start; i<=stop; ++ i)
        printf("%d \n", i);
        sum = sum +i;
    printf("the sum is %d" ,sum);
        return 0;
    }