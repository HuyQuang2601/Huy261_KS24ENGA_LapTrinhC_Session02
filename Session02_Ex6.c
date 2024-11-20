#include <stdio.h>
int main() {
	float PI = 3.14;
	float radius = 4.0;
	float chuvi = 2*PI*radius;
	float area = PI*radius*radius;
	
	printf("Ban kinh hinh tron: %.2f\n", radius);
	printf("Chu vi hinh tron: %.2f\n", chuvi);
	printf("Dien tich hinh tron: %.2f\n", area);
	
	return 0;
}
