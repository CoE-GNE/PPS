// Execute file using
// xmake drun < input.txt

#include <stdio.h>

const int SIZE = 10;

int main(int argc, char** argv)
{

    int rollNo[SIZE];
    
//   Input from standard input device (Keybiard)


    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",  &rollNo[i]);
    }    

// Dispaly roll no

    for (int i = 0; i < SIZE; i++)
    {
        printf("Sr. No = %d  Roll No = %d\n", i+1, rollNo[i]);
    }    

    return 0;
}
