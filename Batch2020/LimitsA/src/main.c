#include <stdio.h>

int main(int argc, char** argv)
{
    unsigned short current = 1, // current started with some convenient value
        step = 1, // step size
        maxValue, minValue, // Maximum and Minmum, required result
        nextPositive = current + step, // next higher
        nextNegative = current - step; // one step lower
    
    while(nextPositive - current == step)
    {
        current = nextPositive;
        maxValue = nextPositive++;
    }    
    
    current = 1;
    while(current - nextNegative == step)
    {
        current = nextNegative;
        minValue = nextNegative--;
    }    
    
    printf("Min value %hu\n", minValue);
    printf("Max value %hu\n", maxValue);

    return 0;

}
