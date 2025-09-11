#include <stdio.h>
int main()
{
    int num[5];
    int max, min, sum=0;

    printf("Enter 5 elements(num) to array \n");
    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d", &num[i]);
        if(i==0)
        max = min = num[i];//initialization

        if(max < num[i])
        max = num[i];

        if(min > num[i])
        min = num[i];

        sum += num[i];
    }
    //display array
    printf("Entered array:\n");
    for(int i=0 ; i<5 ; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");

    printf("Maximum number from Entered array: %d\n",max);
    printf("Minimum number from Entered array: %d\n",min);
    printf("Sum of numbers from Entered array: %d\n",sum);

    return 0;
}