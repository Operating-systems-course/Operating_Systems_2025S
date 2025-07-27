#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int port = 3000;
    printf("Hello\n");
    printf("Port ->  %d\n", port);
    printf("Argc ->  %d\n", argc);
    puts(argv[0]);
    puts(argv[1]);
    
    return 0;
}