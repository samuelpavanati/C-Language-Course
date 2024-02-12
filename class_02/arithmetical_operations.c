#include <stdio.h>

int main() {
    int value_1 = 4;
    int value_2 = 2;

    int addition       = value_1 + value_2;
    int subtraction    = value_1 - value_2;
    int multiplication = value_1 * value_2;
    int division       = value_1 / value_2;
    int remainder      = value_1 % value_2;

    printf("Addition        = %d\n", addition);
    printf("Subtraction     = %d\n", subtraction);
    printf("Multiplication  = %d\n", multiplication);
    printf("Division        = %d\n", division);
    printf("Remainder       = %d\n", remainder);    

    return 0;
}