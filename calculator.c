    #include <stdio.h>

    int main(){
        int a, b;
        int sum, mul, diff;
        double div;

        printf("Oh hello there, please enter number a: ");
        scanf("%d", &a);

        printf("Please enter number b: ");
        scanf("%d", &b);

        sum = a + b;
        diff = a - b;
        mul = a * b;
        div = (double)a / b;

        printf("Sum is: %d\nDifference is %d\nProduct is %d\nAnd the quotient is %.2f", sum, diff, mul, div);
        return 0;

    }
