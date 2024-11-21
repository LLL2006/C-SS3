#include <stdio.h>

int main() {
	float canh_day, chieu_cao, dien_tich;
	
	// Yeu cau nguoi dung nhap do dai canh day va chieu cao cua tam giac
	printf("Nhap do dai canh day cua tam giac (don vi: cm): ");
	scanf("%f", &canh_day);
	
	printf("Nhap do dai chieu cao cua tam giac(don vi: cm) : ");
	scanf("%f", &chieu_cao);
	
	// Tinh dien tich hinh tam giac
	dien_tich = 0.5 * canh_day * chieu_cao; 
	
	// In ket qua ra man hinh
	printf("Dien tich cua tam giac: %.2f cm vuong\n", dien_tich);
	
	return 0;
}
