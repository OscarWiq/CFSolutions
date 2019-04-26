#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

typedef int64_t I64;

int main() {
	I64 n, count = 0;
	scanf("%"SCNi64, &n);

	while (n >= 10) {
		n++;
		while (n % 10 == 0)
			n /= 10;
		count++;
	}
	
	printf("%d\n", count + 9);
	return 0;
}
