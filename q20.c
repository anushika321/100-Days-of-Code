#include <stdio.h>
int main() {
    int n, digit, product = 1, found = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        n /= 10;
    }
    if (found)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");
    return 0;
}

#Question no2 

#include <stdio.h>
int main() {
    long bin, rem, comp = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%ld", &bin);
    while (bin > 0) {
        rem = bin % 10;
        comp += (rem == 0 ? 1 : 0) * place;
        place *= 10;
        bin /= 10;
    }
    printf("1's Complement = %ld\n", comp);
    return 0;
}