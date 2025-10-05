#include <stdio.h>

int main(){
    char name[1024];
    printf("Hello, please enter your name: ");
    scanf("%[^\n]", name);
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Oh hello there, %s! Your age is %d", name, age);
    return 0;

}