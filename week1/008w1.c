#include <stdio.h>

int main () {
    float A; // Using float to support decimals like 3.5 lakhs
    printf("Enter amount to be taxed (in lakhs): ");
    scanf("%f", &A);
    
    // An if-else chain checks ranges perfectly from top to bottom
    if (A < 2.5) {
        printf("Tax on this amount: 0\n");
    }
    else if (A < 5.0) {
        printf("Tax on this amount: %f\n", A * 0.05); // 5% tax
    }
    else if (A < 10.0) {
        printf("Tax on this amount: %f\n", A * 0.20); // 20% tax
    }
    else {
        printf("Tax on this amount: %f\n", A * 0.30); // 30% tax
    }

    return 0;
}
