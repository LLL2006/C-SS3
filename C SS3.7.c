#include <stdio.h>

int main() {
	int so, tong = 0;
	
	// Yeu cau nguoi dung nhap mot so nguyen co 4 chu so
	printf("Nhap mot so nguyen co 4 chu so: ");
	scanf("%d", &so);
	
	// Kiem tra so nhap vao co phai la so co 4 chu so khong
	if (so < 1000 || so > 9999) {
		printf("Vui long nhap mot so nguyen co dung 4 chu so.\n");
	} else {
		// Tinh tong cac chu so
		tong += so % 10; // Lay chu so hang don vi
		so /= 10; // Loai bo chu so hang don vi
		
		tong += so % 10; // Lay chu so hang chuc
		so /= 10; // Loai bo chu so hang chuc
		
		tong += so % 10; // Lay chu so hang tram
		so /= 10; // Loai bo chu so hang tram
		
		tong += so; // Lay chu so hang nghin
		
		// Hien thi ket qua
		printf("Tong cac chu so la: %d\n", tong);
	}
	
	return 0;
}
