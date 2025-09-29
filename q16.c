#include <stdio.h>
int main()
{
    float tax, is, per;

    printf("Enter the value of is:");
    scanf("%f", &is);

    if (is < 2.5L && is > 5.0L)
    {
        printf("no tax is applied \n ");
    }

    if (is > 5.0L && is < 10.0L)
    {
        printf("20per tax is applied \n ");
    }
    if (is > 10.0L)
    {
        printf("30tax is applied \n ");
    }

    return 0;
}