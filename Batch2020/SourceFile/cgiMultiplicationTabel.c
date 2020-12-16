// Executing in browser by anyone
// Example of CGI: Common Gateway Interface


#include <stdio.h>

int table = 13;

int main(int argc, char** argv)
{
    printf("Content-type: text/html\n\n <pre>\
    Fun with C!\n\n");
    
    for (int i; i < 10; i++)
    {
     printf("%d \t x \t %d \t = \t%d \n", i, table, i * table );
    }
    
    printf("</pre>");
    
    return 0;
}
