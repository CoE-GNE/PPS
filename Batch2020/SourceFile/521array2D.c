// Execute file using
// xmake run < input.txt

#include <stdio.h>

const int SIZE = 10;

int main(int argc, char** argv)
{

    int marks[SIZE][SIZE];
    
//   Input from standard input device (Keyboard)


// Dispaly roll no

    for (int i = 0; i < SIZE; i++)
    {

        for (int j = 0; j < SIZE; j++)
        {
            marks[i][j]= (i+1) * (j+1);
            printf("%d\t", marks[i][j]);
        }    
        printf("\n");
    }    

    return 0;
}
