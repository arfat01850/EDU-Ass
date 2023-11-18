#include <stdio.h>

int main() {
    float kg, lb;

    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);

    lb = kg / 0.45;

    printf("%.2f kilograms is equal to %.2f pounds\n", kg, lb);

    return 0;
}
