// C Program to Add, Substract, Divide, Multiply, Modulo of Two Numbers.
#include <stdio.h>

int main() {
    
    int x;
    int y;
    
    printf("Enter value of X: ");
    scanf("%d",&x);
    printf("Enter value of Y: ");
    scanf("%d",&y);
    
    printf("X + Y = %d\n",x+y);
    printf("X - Y = %d\n",x-y);
    printf("X * Y = %d\n",x*y);
    printf("X / Y = %d\n",x/y);
    printf("X % Y = %d",x%y);

    return 0;
}
