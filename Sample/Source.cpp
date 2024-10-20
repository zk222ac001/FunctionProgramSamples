#include <stdio.h>

void function1();
void function2();

static int a = 1;
int main(void) {
	int b = 2;
}

void function1()
{
	int c = 3;
	a = 4;
}

void function2()
{
	int d = 4;
	a = 5;
}
