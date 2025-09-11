#include<stdio.h>
int main()
{
    int n;
    printf("Enter a integer");
    scanf("%d",&n);
    int s=0;
    for(int i=2;i<n;i=i+2)
    {
    s=s+(i*i);
    }
    printf("Sum of squares of even nos.= %d",s);
    
    return 0;
}
