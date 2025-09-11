#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array \n");
    scanf("%d",&n);
    int num[n];
    int cp=0, cn=0;

    printf("Enter elements(num) to array \n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &num[i]);

        if(num[i] >= 0)
        cp++;
        else 
        cn++;
    }
    printf("Count of positive numbers: %d\n", cp);
    printf("Count of negative numbers: %d\n", cn);
    return 0;
}