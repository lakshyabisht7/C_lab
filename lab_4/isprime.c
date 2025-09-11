#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a positive integer\n");
    scanf("%d",&n);
    if(n<=1)
    {
    printf("%d is not a prime no.",n);
    return 0;
    }
    else if(n>1)
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            c++;
        }
        if (c==0)
        printf("%d is a prime no.",n);
        else
        printf("%d is not a prime no.",n);
    
        return 0;
    }
}