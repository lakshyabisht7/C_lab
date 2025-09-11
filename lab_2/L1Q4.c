#include<stdio.h>
#include<math.h>
int main()
{
    float d,t_s,t_m,as;
    int m,s,at_m,rt_s,at_s;
    printf("enter distance in km");
    scanf("%f",&d);
    printf("enter time in min and sec");
    scanf("%d  %d", &m, &s);

    t_s = m*60.0 + s;
    t_m = t_s/60.0;
    at_s = t_s/d;
    rt_s = at_s % 60;
    at_m = (int)(at_s / 60.0);
    as = d/(t_m/60.0);
    printf("Avg time/km = %d mins %d sec \n Avg dist in km/hr = %f ",at_m, rt_s, as);

    return 0;
}