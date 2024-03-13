#include <stdio.h>
#include <math.h>

int main() {
    float a = 1, b = -5, c = 6;
    float delta;
    float square_root_of_delta;
    float x1, x2;
    
    delta = pow(b, 2) - 4*a*c;
    
    if (delta >= 0) {
        square_root_of_delta = sqrt(delta);
        
        x1 = (-b + square_root_of_delta) / (2*a);
        x2 = (-b - square_root_of_delta) / (2*a);
        
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else {
        printf("Error! Delta < 0\n");
    }

    return 0;
}