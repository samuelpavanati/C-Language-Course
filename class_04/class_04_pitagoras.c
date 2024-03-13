#include <stdio.h>
#include <math.h>

int main() {
    float a; // leg 1
    float b; // leg 2
    float c; // hypotenuse
    int choice;
    
    printf("Choose an option:\n[0] Calculate leg\n[1] Calculate hypotenuse\n");
    scanf("%d", &choice);
    
    if (choice == 0) {
        printf("Enter the hypotenuse and then the leg\n");
        scanf(" %f %f", &c, &a); // 5 4
        
        b = sqrt(pow(c, 2) - a*a);
        printf("Leg = %.2f\n", b);
    
    } else if (choice == 1) {
        printf("Enter the legs\n");
        scanf(" %f %f", &a, &b); // 4.4 3.4
        
        c = sqrt(a*a + b*b);
        printf("Hypotenuse = %.2f\n", c);
    }

    return 0;
}