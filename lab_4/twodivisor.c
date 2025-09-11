#include<stdio.h>
int main()
{
    int n;
    int c=0;
    printf("Enter a positive integer\n");
    scanf("%d",&n);
    while(n>1)
    {
        n=n/2;
        c++;
    }
    printf("Count of times input no. can be divided by 2 = %d",c); 

    return 0;
}
