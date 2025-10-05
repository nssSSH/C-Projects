#include <stdio.h>

int main(){
    float celsius, fah, kelvin;

    printf("Please enter the digits in celsius: ");
    scanf("%f", &celsius);

    fah = (celsius * 1.8) + 32;
    kelvin = celsius + 273.15;

    printf("In fahreneit: %.2f\nIn kelvin: %.2f", fah, kelvin);
    return 0;
}
