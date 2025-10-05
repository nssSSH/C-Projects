    #include <stdio.h>

    int main(){
        int a, b, c;

        printf("Please enter number a: ");
        scanf("%d", &a);
        printf("Please enter number b: ");
        scanf("%d", &b);
        printf("Please enter number c: ");
        scanf("%d", &c);

        if (a >= b && a >= c) {
            printf("A is the greatest number."); 
        } else if ( b >= a && b >= c) {
            printf("B is the greatest number.");
        } else {
            printf("C is the greatest number.");
        }

        return 0;
    }
