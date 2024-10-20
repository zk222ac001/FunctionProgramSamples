#include <stdio.h>

int factorial(int n) {

	if (n == 0) {
		return 1; // Base case : factorial of 0 is 1
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main() {
	int number = 5; 
	printf("Factorial of %d is %d\n", number, factorial(number));
	return 0;
}