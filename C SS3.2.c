#include <stdio.h>

int main() {
	float celsius, fahrenheit;
	
	// Yeu cau nguoi dung nhap nhiet do Celsius
	printf("Nhap nhiet do theo do Celsius: ");
	scanf("%f", &celsius);
	
	// Chuyen doi tu Celsius sang Fahrenheit
	fahrenheit = (celsius * 9 / 5) + 32;
	
	// Hien thi ket qua
	printf("Nhiet do theo do fahrenheit: %.2f\n", fahrenheit);
	
	return 0;
}
