#include "isprime.h"

int is_prime(int start, int end)
{    
        if (start == 1 || start == 2)
                return 1;

        if (start < 1 || end <= start)
                return -1;
    
        int check;
        for(;start < end; start++) {
                if (start %2 == 0) {
                        return 0;
                }
        }

        return 1;
}
