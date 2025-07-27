#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc < 3)
    {
        printf("Invalid Arguments...\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    
    printf("Sum -> %d + %d = %d\n", a, b, (a + b));
    return 0;
}
