#include <stdio.h>

int main(void)
{
    double num;

    printf("Enter a float-point value: ");
    scanf("%lf", &num);
    printf("fixed-point notation: %.2f\n", num);
    printf("exponential notation: %.2e\n", num);
    printf("p notation: %a\n", num);

    return 0;
}
