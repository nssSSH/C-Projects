#include <stdio.h>

int main(){
    int marks;

    printf("Please enter your marks so that it can be judged: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("You get a A grade! Congrats!");
    } else if (marks >= 80) {
        printf("You get a B grade! Almost there!");
    } else if (marks <= 79) {
        printf("Congrats, you failed. ");
    }

    return 0;
}
