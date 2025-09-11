#include<stdio.h>
int main()
{
    float avg;
    int a,b,c,d,e;
    printf("Enter 5 nos.");
    scanf(" %d\n",&a);
    scanf(" %d\n",&b);
    scanf(" %d\n",&c);
    scanf(" %d\n",&d);
    scanf(" %d",&e);
    avg=(a+b+c+d+e)/5.0;
    printf("average = %f",avg);
    
    return 0;
}