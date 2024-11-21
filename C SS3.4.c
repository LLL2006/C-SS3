#include <stdio.h>
int main() {
	// Khai bao bien
	float diemToan, diemVan, diemAnh, tongDiem, diemTB;
	
	// Nhap du lieu
	printf("Moi ban nhap vao diem toan ");
	scanf("%f",&diemToan);
	
	printf("Moi ban nhap vao diem van ");
	scanf("%f",&diemVan);
	
	printf("Moi ban nhap vao diem anh ");
	scanf("%f",&diemAnh);
	
	// Tinh toan
	// Tinh tong
	tongDiem = diemToan + diemVan + diemAnh;
	
	// Tinh diem TB
	diemTB = tongDiem / 3;
	
	// Hien thi ket qua
	printf("Tong diem = %f \n",tongDiem);
	printf("Diem TB = %f \n",diemTB);
	
	return 0;
}
