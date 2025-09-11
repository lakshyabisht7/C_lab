#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter 2 nos");  
  scanf("%d",&a);
  scanf("%d",&b);

  if(a>=b)
  {
   if(a%b==0)
   printf("%d is divisor of %d",b,a);
   else 
   printf("%d is not divisor of %d",b,a);
  }
  else 
  {
   if(b%a==0)
   printf("%d is divisor of %d",a,b);
   else 
   printf("%d is not divisor of %d",a,b);
  }

  return 0;
}
