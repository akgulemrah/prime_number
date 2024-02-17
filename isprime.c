#include <stdio.h>
#include <stdlib.h>

int is_prime(int start, int end);

int is_prime(const int start, const int *sayi2)
{
        if (start == 0)
                start = 1;
    
        if (start < 0 || end <= start)
                return -1
    
        int check;
        for(;start < end; start++) {
                if (start %2 == 0) {
                        return 0;
                }
        }

        return 1;
}
