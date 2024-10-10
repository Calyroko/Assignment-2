/* while loop
author - caleb maroko
date -     10-10-24
*/
#include <stdio.h>
int main()
{
    int x = 1;
    int sum = 0;
    int start;
    int stop;
    
    printf("enter the value of when to start:");
    scanf("%d" ,&start);
    printf("enter the value of when to stop:");
    scanf("%d" ,&stop);
    x = start;
    do
    {
        printf("%d\n",x);
        sum +=x;
        x++;
    }
    while (x <=stop);
    printf("the sum is:%d\n",sum);
    return 0;
}