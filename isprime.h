#ifndef ISPRIME_H
#define ISPRIME_H

int is_prime(long long end)
{
        long long start = 2;
        
        if (end == 1 || end == 2)
                return 1;

        if (end < 1)
                return 0;

        for(;start < end; start++) {
                if (end %start == 0) {
                        return 0;
                }
        }
        return 1;
}
#endif /* ISPRIME_H */
