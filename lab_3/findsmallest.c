#include<stdio.h>
int main()
{
    int a,b,c,s;
    printf("Enter 3 nos:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a<=b && a<=c)
    printf("smallest no: %d",a);
 
    else if(b<=a && b<=c)
    printf("smallest no: %d",b);

    else if(c<=a && c<=b)
    printf("smallest no: %d",c);

    return 0;
}