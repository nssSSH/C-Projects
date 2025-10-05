#include <stdio.h>

int main(){
    int principal, rate_of_interest, time;
    double simpleinterest;
    printf("Please enter principal amount: ");
    scanf("%d", &principal);

    printf("Please enter rate of interest: ");
    scanf("%d", &rate_of_interest);

    printf("Please enter time (in years): ");
    scanf("%d", &time);

    simpleinterest = ((double)principal * rate_of_interest * time) / 100;
    printf("The simple interest is: %.2f", simpleinterest);
    return 0;
}
