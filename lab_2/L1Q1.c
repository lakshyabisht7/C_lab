#include<stdio.h>
int main()
{
    int len, wid;
    printf("Enter length\n");
    scanf("%d",&len);
    printf("Enter breadth\n");
    scanf("%d",&wid);
    
    int o1=len/3;
    int o2=wid/2;
    float o3=len/3.0;
    float o4=(float)len/wid;
    printf("output1= %d\n output2= %d\n output3= %f\n output4= %f\n output5= %d\n",o1,o2,o3,o4,(wid+len)/len>len/wid);
    
    return 0;
}