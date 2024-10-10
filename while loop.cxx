/*while loop
author - caleb maroko
date 09-10-24
*/
#include <stdio.h>
int main()
{
    int x;
    int sum = 0;
    int start;
    int stop;
    
    printf("enter the starting value:");
    scanf("%d",&start);
    printf("enter the value to stop:");
    scanf("%d",&stop);
    x = start;
    while ( x<=stop)
    {
        printf("%d\n" ,x);
        sum +=x;
    x++;}
    printf("the sum is %d\n" , sum);
    return 0;
    }