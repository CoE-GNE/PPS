#include "main.h"

int main(int argc, char** argv)
{

    printf("Enter two number: ");
    scanf("%f%f", &num1, &num2);

    printf("\nSum: %f + %f = %f\n", num1, num2, sum(num1, num2));
    return 0;
}
