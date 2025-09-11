#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array \n");
    scanf("%d",&n);
    int num[n], cs[n];

    printf("Enter elements(num) to array \n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &num[i]);
    }
    
    cs[0] = num[0] ;
    //cumulative sum calculate
    for(int i=1 ; i<n ; i++)
    {
        cs[i] = cs[i-1] + num[i];
    }

    //cumulative sum display
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",cs[i]);
    }

    return 0;
}