#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50], s2[50], result[100];
    printf("Enter String 1\n");
    scanf("%s",s1);
    printf("Enter String 2\n");
    scanf("%s",s2);

    strcpy(result, s1); //copy s1 into result
    strcat(result, s2); //concat s2 into result
    printf("Result String %s",result);
    
    return 0;
}
