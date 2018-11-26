#include <stdio.h>

int main(int argc, char *argv[])
{
#if !defined(_WIN64)
    printf("sizeof ptr %lu\n", sizeof(void *));
    printf("sizeof unsigned long long %lu\n", sizeof(1ULL));
#endif
    printf("%llu\n", 1ULL << 47);
    return 0;
}
