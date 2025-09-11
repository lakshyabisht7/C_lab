#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);

    char hex[20];
    char hexDigit[] = "0123456789ABCDEF";
    int temp = n;
    int i=0;

    if(temp == 0)
    {
        hex[i++]='0';
    }

    while(temp>0) //calculating hexadecimal
    {
        int rem = temp % 16;
        hex[i++] = hexDigit[rem];
        temp = temp/16;
    }
    hex[i] = '\0';

    printf("Hexadecimal : ");
    for(int j=i-1 ; j>=0 ; j--) //reversing hex string
    {
        printf("%c", hex[j]);
    }
    printf("\n");

    char oct[20];
    temp = n;
    i=0;
    if(temp == 0)
    {
        oct[i++]='0';
    }

    while(temp>0) //calculating octal
    {
        int rem = temp % 8;
        hex[i++] = rem + '0';
        temp = temp/8;
    }
    oct[i] = '\0';

    printf("Octal : ");
    for(int j=i-1 ; j>=0 ; j--) //reversing octal
    {
        printf("%c", oct[j]);
    }
    printf("\n");

    if( n>=32 && n<=126 )
    {
        printf("ASCII : %c ",n);
    }
    else
    {
        printf("ASCII code not available");
    }

    return 0;
}