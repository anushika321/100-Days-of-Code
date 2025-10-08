void main()
{
    int a[] = {19, 29, 39, 49}; 
    int *p = a + 3; 
    ++*p;
    --p;
    --*p;
    printf("%d,%d,%d", ++*p, *--p, *++p);
}