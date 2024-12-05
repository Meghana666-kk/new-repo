#include <stdio.h>
 
int add(int a, int b);
int sub(int a, int b);
 
int main() 
{
    int x = 10, y = 5;
 
    printf("Addition of %d and %d is %d\n", x, y, add(x, y));
    printf("Subtraction of %d and %d is %d\n", x, y, sub(x, y));
 
    return 0;
}
