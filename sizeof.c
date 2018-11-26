#include <stdio.h>

int main(int argc, char *argv[])
{
    long p;
    printf("sizeof ptr %lu\n", sizeof(void *));
    p = 1234567890;
    printf("%lu\n", p & 0x7fffffffffff);
    return 0;
}
