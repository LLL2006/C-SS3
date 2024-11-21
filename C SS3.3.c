#include <stdio.h>

int main() {
	//Khai bao hang so PI va ban kinh cua hinh tron
	const float PI = 3.14; // Hang so PI
	float radius = 5.0;    // Ban kinh (Don vi: met)
	
	// Tinh chu vi va dien tich cua hinh tron
	float circumference = 2 * PI * radius; // Chu vi = 2 * PI * Ban kinh
	float area = PI * radius * radius;    // Dien tich = PI * Ban kinh^2
	
	// In ket qua ra man hinh
	printf("Ban kinh cua hinh tron: %.2f met\n", radius);
	printf("Chu vi cua hinh tron: %.2f met\n", circumference);
	printf("Dien tich cua hinh tron: %.2f met vuong\n", area);
	
	return 0;
}
