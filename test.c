#include "isprime.h"

int main()
{
	for (int i = 1; i <= 100; i++) {
		int ret = is_prime(i);
		if (ret == 1) {
			printf("%d is prime.\n", i);
		}
	}
	return 0;
}
