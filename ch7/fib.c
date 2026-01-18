#include<stdio.h>

void fib() {
	int fib[40] = { [0] = 1,[1] = 1 };
	for (int i = 2; i < (sizeof(fib) / sizeof(fib[0])); i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (int i = 0; i < 40; i++) {
		printf("%d \n", fib[i]);
	}
}