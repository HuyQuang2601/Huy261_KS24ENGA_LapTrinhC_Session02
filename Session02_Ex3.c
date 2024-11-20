#include <stdio.h>

int main() {
	int a = 1;
	int b = 2;
	
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	float quotient = (float)a / b;
	
	printf("Tong cua %d và %d là %d\n", a, b, sum);
	printf("Hi?u cua %d và %d là %d\n", a, b, difference);
	printf("Tích cua %d và %d là %d\n", a, b, product);
	printf("Thuong cua %d và %d là %.2f\n", a, b, quotient);
	return 0;
}
