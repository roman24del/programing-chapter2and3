#include <stdio.h>

int main(void)
{
    int a , b , c;
    printf("enter the first value (5):");
    scanf("%d", &a);
    printf("enter the second value(7)");
    scanf("%d", &b);
    c = a + b;
    printf("%d + %d = %d\n" , a, b, c );
    return 0;
}
