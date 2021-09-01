#ifndef search_alg
#define search_alg

#include <stdio.h>

/* ----------- SEARCHING ALGORITHMS -------------- */
int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
void print_array(int *, size_t);
int jump_search(int *array, size_t size, int value);

#endif /* search_alg */
