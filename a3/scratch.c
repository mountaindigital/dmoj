#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    printf("192 * 192 * 192: %u\n", 192 * 192 * 192);
    printf("pow(192, 3): %llu\n", (unsigned long long)pow(192, 3));
    printf("7077888 %% 888: %d\n", 7077888 % 888);
    printf("sizeof(unsigned long): %lu\n", sizeof(unsigned long));
    printf("sizeof(size_t): %lu\n", sizeof(size_t));
    printf("sizeof(unsigned long long): %lu\n", sizeof(unsigned long long));
    
    return EXIT_SUCCESS;
}
