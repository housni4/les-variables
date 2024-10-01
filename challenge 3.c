
#include <stdio.h>

int main()
{
    float Yards, Km;
    printf("=== Give me the distance you have in Km and I will convert it to yards ===\n");
    printf("distance in Km: ");
    scanf("%f", &Km);
    Yards = Km * 1093.61;
    printf("Your distance in Km is : %.2f\n", Yards);

    return 0;
}
