// naive implementation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct deco {
    unsigned start;
    unsigned stop;
    unsigned val;
} deco;

void solve(unsigned maxspooky, unsigned numhouses, unsigned numdecs, deco decs[numdecs]) {
    unsigned* houses = calloc(sizeof(unsigned), numhouses);

    for (unsigned i = 0; i < numdecs; i++) {
        for (unsigned j = decs[i].start; j < decs[i].stop; j++) {
            houses[j] += decs[i].val;
        }
    }

    unsigned long candy = 0;
    for (unsigned i = 1; i < numhouses; i++) {
        if (houses[i] < maxspooky)
            candy++;
    }

    printf("%lu\n", candy);
}

int main(void) {
    unsigned numdecs = 0;
    unsigned numhouses = 0;
    unsigned maxspookiness = 0;
    scanf("%u %u %u", &numdecs, &numhouses, &maxspookiness);

    deco* decs = malloc(sizeof(deco) * numdecs);
    for (unsigned i = 0; i < numdecs; i++) {
        scanf("%u %u %u", &decs[i].start, &decs[i].stop, &decs[i].val);
    }
    
    solve(maxspookiness, numhouses, numdecs, decs);

    return EXIT_SUCCESS;
}
