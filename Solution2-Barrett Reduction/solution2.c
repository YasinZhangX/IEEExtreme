#include <stdio.h>
#include "solution2.h"

static uint32 localA = 0;
static uint64 power2B = 1;
static int latestApplyD = 0;

static int getBitRemainFromAToPower2B(void);
static uint64 leftShift(int shiftBit);
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

    int Dmax = (int) leftShift(bitRemain);
    int Dmin = 1;
    latestApplyD = Dmax;

    return findDByBinarySearch(Dmin, Dmax);
}

static uint64 leftShift(int shiftBit)
{
    uint64 ret = 1;

    int i = 0;
    while (i < shiftBit)
    {
        ret <<= 1;
        i++;
    }

    return ret;
}

static int getBitRemainFromAToPower2B()
{
    uint64 A_64 = (uint64) localA;
    uint64 wall = power2B;
    
    int bitRemain = 0;
    while (A_64 < wall)
    {
        A_64 <<= 1;
        bitRemain++;
    }
    
    return bitRemain;
}

static int findDByBinarySearch(int start, int end)
{
    uint64 A_64 = (uint64) localA;

    int flag;
    int newMid;
    int mid = (start + end) / 2;

    if ((mid * A_64) >= power2B)
    {
        flag = 1;
        latestApplyD = mid;
        newMid = (start + mid) / 2;
    } 
    else 
    {
        flag = 0;
        newMid = (mid + end) / 2;
    }

    if (newMid == mid || newMid == start || newMid == end)
    {
        return latestApplyD;
    }
    
    if (flag)
    {
        return findDByBinarySearch(start, mid);
    }
    else
    {
        return findDByBinarySearch(mid, end);
    }
    
    
}