#ifndef ISPRIME_H
#define ISPRIME_H

#include <stdlib.h>

int is_prime(long long end)
{
	int check;
	long long start = 2;
        if (end == 1 || end == 2)
                return 1;

        if (end < start)
                return -1;
    
        
        for(;start < end; start++) {
                if (end %start == 0) {
                        return 0;
                }
        }

        return 1;
}


#endif
