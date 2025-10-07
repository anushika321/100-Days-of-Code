void main()
{
    int a[][3]={{10,20,30},{40,50,60},{70,80,90}};
    int (*p)[3];
    int *q;
    p=a;
    q=a;
    printf("%u,%u",p,q);
    p++;
    q++;
    printf("\n%u,%u",p,q);
    p++;
    q++;
    printf("\n%u,%u",p,q);
    
}