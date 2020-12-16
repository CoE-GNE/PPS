// Executing in browser by anyone
// Example of CGI: Common Gateway Interface


#include <stdio.h>

int main(int argc, char** argv)
{
    printf("Content-type: text/html\n\n\
    hello world!\n");
    return 0;
}
