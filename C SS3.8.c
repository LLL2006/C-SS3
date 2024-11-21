#include <stdio.h>

int main() {
	int so, nghichDao = 0;
	
	// Yeu cau nguoi dung nhap mot so nguyen co 4 chu so
	printf("Nhap mot so nguyen co 4 chu so: ");
	scanf("%d", &so);
	
	// Kiem tra so nhap vao co phai la so co 4 chu so khong
	if (so < 1000 || so > 9999) {
		printf("Vui long nhap mot so nguyen co dung 4 chu so.\n");
	} else {
		// Tinh so nghich dao
		while (so > 0) {
			nghichDao = nghichDao * 10 + so % 10; // Them chu so vao so nghich dao
			so /= 10; // Loai bo chu so vua xu ly
		}
		
		// Hien thi ket qua
		printf("So nghich dao la: %d\n", nghichDao);
    }
		
		return 0;
}
