#include <stdio.h>

int main() {
    int A = 1, B = 1;
    
    // NOT A
    if (!A) {
        printf("NOT = 1\n");
    } else {
        printf("NOT = 0\n");
    }
    
    // A AND B
    if (A && B) {
        printf("AND = 1\n");
    } else {
        printf("AND = 0\n");
    }
    
    // A OR B
    if (A || B) {
        printf("OR = 1\n");
    } else {
        printf("OR = 0\n");
    }

    return 0;
}

