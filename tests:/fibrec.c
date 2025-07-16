#include <stdio.h>

int fib(int a) {
    if (a == 0)
        return 0;
	if (a == 1)
			return 1;
    return fib(a) + fib(a-1);
}

int main() {
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    printf("fibonacci sequence: %d\n", fib(n));
    return 0;
}