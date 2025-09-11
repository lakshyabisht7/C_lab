#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter yor grade AA AB BB BC CC CD DD FR :\n");
    scanf("%s", str);

    if(strcmp(str,"AA")==0||strcmp(str,"aa")==0)
    printf("Excellent");

    else if(strcmp(str,"AB")==0||strcmp(str,"ab")==0)
    printf("Very Good");

    else if(strcmp(str,"BB")==0||strcmp(str,"bb")==0)
    printf("Excellent");

    else if(strcmp(str,"BC")==0||strcmp(str,"bc")==0)
    printf("Good");

    else if(strcmp(str,"CC")==0||strcmp(str,"cc")==0)
    printf("Satisfactory");

    else if(strcmp(str,"CD")==0||strcmp(str,"cd")==0)
    printf("Pass");

    else if(strcmp(str,"DD")==0||strcmp(str,"dd")==0)
    printf("Just Pass");

    else if(strcmp(str,"FR")==0||strcmp(str,"fr")==0)
    printf("Fail");

    else
    printf("Illegal Grade");

    return 0;
}