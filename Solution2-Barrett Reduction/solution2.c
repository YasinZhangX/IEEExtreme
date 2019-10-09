#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s A B \n", argv[0]);
        return 1;
    }

    double A = atof(argv[1]);
    int B = atoi(argv[2]);
    
    
}