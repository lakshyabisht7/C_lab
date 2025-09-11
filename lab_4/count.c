#include<stdio.h>
int main()
{
    int c, n, cp=0, cn=0, cz=0;
    printf("Enter count of input nos.");
    scanf("%d",&c);
    for (int i=1;i<=c;i++)
    {
        printf("Input any no.\n");
        scanf("%d",&n);
        if(n>0)
        cp++;
        else if(n<0)
        cn++;
        else if(n==0)
        cz++;
    }
    printf("Count of Positive nos. = %d ",cp);
    printf("Count of Negative nos. = %d ",cn);
    printf("Count of zeros= %d ",cz);

    return 0;
}
