#include <stdio.h>

int main(){
    int a, b, temp;

    printf("Please enter the value of a: ");
    scanf("%d", &a);

    printf("Please enter the value of b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("The values of a and b are %d, %d respectively.", a, b);
    return 0;
}
