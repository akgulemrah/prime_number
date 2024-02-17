#include "isprime.h"

int is_prime(int end)
{    
	int start = 2;
        if (end == 1 || end == 2)
                return 1;

        if (end < start)
                return -1;
    
        int check;
        for(;start < end; start++) {
                if (end %start == 0) {
                        return 0;
                }
        }

        return 1;
}
