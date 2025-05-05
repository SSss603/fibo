#include "fibo.h"
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv []) {
    long ret;
    int n;
    if (argc < 2) {
        fprintf(stderr, "missing index.\n");
        return EXIT_FAILURE;
    }
    n = atoi(argv[1]);
    ret = fibo(n);
    printf("Fibo (%d) is %ld\n", n, ret);
    return EXIT_SUCCESS;
}
