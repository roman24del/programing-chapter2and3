#include <stdio.h>

int main(void)
{
    int a = 0;
    while (a <= 100)
    {
        printf("%4d degrees F = %4d degrees C\N" ,
               a, (a-32)*5/9);
        a = a + 10;
    }
    return 0;
}
