#include <stdio.h>
// Swapping two values to each other 
void swap(int a , int b);

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int x = 10; 
	int y = 20;

	printf("Before swap: x = %d , y = %d\n", x, y);
	swap(x, y);
	printf("After swap: x = %d , y = %d\n", x, y);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	return 0;


}