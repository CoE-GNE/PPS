#include <stdio.h>

const int SIZE = 10;

int main(int argc, char** argv)
{

    int rollNo[SIZE];
    
//    rollNo[0] = 2001;


    for (int i = 0; i < SIZE; i++)
    {
        rollNo[i] = 1801 + i;
        
    }    

// Dispaly roll no

    for (int i = 0; i < SIZE; i++)
    {
        printf("Sr. No = %d  Roll No = %d\n", i+1, rollNo[i]);
    }    

    return 0;
}
