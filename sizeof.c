#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("sizeof ptr %lu\n", sizeof(void *));
    printf("sizeof long %lu\n", sizeof(1UL));
    printf("%lu\n", 1UL << 47);
    return 0;
}
