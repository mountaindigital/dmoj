#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_DIGITS  19

char const*const query = "888";

unsigned suffix888(unsigned min) {
    char digits[MAX_DIGITS] = {0};
    for (unsigned long i = min; i < UINT_MAX; i++) {
        sprintf(digits, "%lu", i * i * i);
        int val = strncmp(digits + strlen(digits)-3, query, 3);
        if (val == 0) {
            return (unsigned)i;
        }
    }

    return 0;
}

int main(void) {
    unsigned num_cases = 0;
    scanf("%u", &num_cases);

    unsigned min = 0;
    unsigned* results = malloc(sizeof(*results) * num_cases);
    for (unsigned i = 0; i < num_cases; i++) {
        scanf("%u", &min);
        results[i] = suffix888(min);
    }

    for (unsigned i = 0; i < num_cases; i++) {
        printf("%u\n", results[i]);
    }
    
    return EXIT_SUCCESS;
}
