#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st side of triange");
    scanf("%d",&a);
    printf("Enter 2nd side of triange");
    scanf("%d",&b);
    printf("Enter 3rd side of triange");
    scanf("%d",&c);
    
    if(a>0 && b>0 && c>0)
    {
    if (a>(b+c) || b>(a+c) || c>(a+b))
    printf("tringle cannot be formed");
    else
    printf("tringle can be formed");
    }
    else
    printf("side invalid");

    return 0;  
}
