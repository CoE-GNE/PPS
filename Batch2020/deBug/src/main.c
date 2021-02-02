#include <stdio.h>

int main(int argc, char** argv)
{
    int height, base, choice, answer;
    scanf("%i%i%i", &choice, &height,&base);    

    printf("SS Choice %i\nHt %d\nBs %d\n",\
           choice, height, base);

    switch(choice)
    {
        case 1:
            answer = height * base;
            printf("SS Ans: %i\n", answer);
        case 2:
            answer = height * base / 2;
            printf("SS Ans: %i\n", answer);
        default:
            answer = 0;
            printf("SS Ans: %i\n", answer);
    }
    printf("%i\n", answer);
    return 0;
}
