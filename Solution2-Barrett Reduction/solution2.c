#include <stdio.h>
#include "solution2.h"

static int getBitRemainFromA2B(uint32 A, int B);

uint32 solution2(uint32 A, int B)
{   
    if (A == 0)
    {
        return 0;
    }
    
    int bitRemain = getBitRemainFromA2B(A, B);

    return 0;
}

static int getBitRemainFromA2B(uint32 A, int B)
{
    uint64 wall = 1;
    int i = 0;
    while (i < B)
    {
        wall <<= 1;
        i++;
    }
    
    int bitRemain = 0;
    while (A < wall)
    {
        A <<= 1;
        bitRemain++;
    }
    
    return bitRemain;
}