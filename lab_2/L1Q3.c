#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    double x=0.0,y=0.0;

    x=(-b+sqrt(b*b-4*a*c))/(2*a);
    y=(-b-sqrt(b*b-4*a*c))/(2*a);
    
    printf("Roots of quad eq are %f %f ",x,y);

    return 0;
}