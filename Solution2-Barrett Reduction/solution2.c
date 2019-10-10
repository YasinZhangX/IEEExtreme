#include <stdio.h>
#include "solution2.h"

static uint32 localA = 0;
static uint64 power2B = 1;
static int latestApplyD = 0;

static int getBitRemainFromAToPower2B(void);
static int leftShift(int shiftBit);
static int findDByBinarySearch(int start, int end);

int solution2(uint32 A, int B)
{   
    if (A == 0)
    {
        return 0;
    }

    localA = A;
    power2B = leftShift(B);
    int bitRemain = getBitRemainFromAToPower2B();

    int Dmax = leftShift(bitRemain);
    int Dmin = 1;
    latestApplyD = Dmax;

    return findDByBinarySearch(Dmin, Dmax);
}

static int getBitRemainFromAToPower2B()
{
    uint32 A = localA;
    uint64 wall = power2B;
    
    int bitRemain = 0;
    while (A < wall)
    {
        A <<= 1;
        bitRemain++;
    }
    
    return bitRemain;
}

static int leftShift(int shiftBit)
{
    int ret = 1;

    int i = 0;
    while (i < shiftBit)
    {
        ret <<= 1;
        i++;
    }
    
    return ret;
}

static int findDByBinarySearch(int start, int end)
{
    int mid = (start + end) / 2;

    if ((mid * localA) >= power2B)
    {
        /* code */
    }
    
}