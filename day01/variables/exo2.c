#include <stdio.h>

int main() {
    float k, c;
    printf("enter a température en Celsius: ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("%.0f en Kelvin est: %.2f", c, k);

    return 0;
}