#include <stdio.h>
int main() {
 printf("%c\n", "ABCDEFG"[printf("123") - printf("12")]);
 return 0;
}