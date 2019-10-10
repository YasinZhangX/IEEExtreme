#include <stdio.h>
#include <stdlib.h>
#include "solution2.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s A B \n", argv[0]);
        return 1;
    }

    uint32 A = atof(argv[1]);
    int B = atoi(argv[2]);

    uint32 D = solution2(A, B);

    printf("get D(%u) from A(%u) and B(%d)", D, A, B);

    return 0;
}