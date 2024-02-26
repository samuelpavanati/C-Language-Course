#include <stdio.h>

int main() {
    int int_value = 10;         // 32 bits 4 bytes -2,147,483,648 to 2,147,483,647
    char char_value = 'A';      //  8 bits 1 byte  -128 to 127
    float float_value = 3.33;   // 32 bits 4 bytes 1.2E-38 to 3.4E+38
    double double_value = 6.66; // 64 bits 8 bytes 1.7E-308 to 1.7E+308
    _Bool _Bool_value = 0;      //  8 bits 1 byte  0 or 1
    
    printf("DATA TYPES\n\n");
    
    printf("   int %d   \n", int_value);
    printf("  char %c   \n", char_value);
    printf(" float %.2f \n", float_value);
    printf("double %.2lf\n", double_value);
    printf(" _Bool %d   \n", _Bool_value);
    
    printf("\nLENGTH\n\n");
    
    int int_length = sizeof(int);
    int char_length = sizeof(char);
    int float_length = sizeof(float);
    int double_length = sizeof(double);
    int _Bool_length = sizeof(_Bool);
    
    printf("   int %d bytes\n", int_length);
    printf("  char %d bytes\n", char_length);
    printf(" float %d bytes\n", float_length);
    printf("double %d bytes\n", double_length);
    printf(" _Bool %d bytes\n", _Bool_length);
    
    printf("\nRELATIONAL OPERATORS\n\n");
    
    if (char_value > int_value) {
        printf("char %d > int %d\n", char_value, int_value); // ASCII
    }
    
    if (float_value < double_length) {
        printf("float %.2f < double %.2lf\n", float_value, double_value);
    }
    
    if (int_value == 10) {
        printf("equal %d == 10\n", int_value);
    }
    
    if (int_value >= 10) {
        printf("greater equal %d >= 10\n", int_value);
    }
    
    if (int_value <= 10) {
        printf("smaller equal %d <= 10\n", int_value);
    }
    
    if (int_value != 9) {
        printf("different %d != 9\n", int_value);
    }

    return 0;
}

