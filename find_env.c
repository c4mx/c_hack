#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *ptr;
    if (ptr = getenv(argv[1]))
        printf("%s found at %p\n", argv[1], ptr);
    else
        printf("%s not found\n", argv[1]);
    return 0;
}

