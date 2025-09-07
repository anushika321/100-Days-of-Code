#include<stdio.h>
int main()
{
    int i , j;
    for (j=0 ; j<4 ; j++) {

    for (i=0 ; i<4 ; i++) {
    
        printf("%d\t", i * j);
    }
    printf("\n");
        
    }
    return 0;
}

