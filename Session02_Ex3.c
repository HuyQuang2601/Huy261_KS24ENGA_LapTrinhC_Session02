#include <stdio.h>

int main() {
	int a = 1;
	int b = 2;
	
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	float quotient = (float)a / b;
	
	printf("Tong cua %d v� %d l� %d\n", a, b, sum);
	printf("Hi?u cua %d v� %d l� %d\n", a, b, difference);
	printf("T�ch cua %d v� %d l� %d\n", a, b, product);
	printf("Thuong cua %d v� %d l� %.2f\n", a, b, quotient);
	return 0;
}
