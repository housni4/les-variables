#include<stdio.h>
int main()
 coo, k;
    printf("=== Give me the temperature you have in Celsius and I will convert it to Kelvin ===\n");
    printf("Temperature in Celsius: ");
    scanf("%f", &coo);
    k = coo + 273.15;
    printf("Your temperature in Kelvin is: %.2f\n", k);

    return 0;
}
