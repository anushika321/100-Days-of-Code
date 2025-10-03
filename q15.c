#include <stdio.h>
int main()
{
    float p, f, m, a, s1, s2, s3, per;

    printf("Enter the marks of s1:");
    scanf("%f", &s1);

    printf("Enter the marks of s2:");
    scanf("%f", &s2);

    printf("Enter the marks of s3:");
    scanf("%f", &s3);

    printf("The subject marks is %f,%f,%f", s1, s2, s3);

    if (s1 < 33 || s1 < 33 || s1 < 33)
    {
        printf("you are failed ");
    }

    else if (s1 + s2 + s3 / 3 > 40)
    {
        printf("you are passed ");
    }

    return 0;
}
