#include<stdio.h>
int main()
{
    int r,Ac,vc,h;
    printf("enter the value of r\n:");
    scanf("%d",&r);

    printf("enetr the value of h\n:");
    scanf("%d",&h);

    Ac=r * r *22/7;
    vc=r*r *h*22/7;

    printf("area of circle\n = %d",Ac);
    printf("volume of cylinder\n = %d",vc);
    return 0;



}
