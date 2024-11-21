#include <stdio.h>
typedef struct {
	int stt;
	char hoVaTen[50];
	int tuoi;
	char soDienThoai[15];
	char email[50];
} SinhVien;

// Hàm in danh sách sinh viên
void inDanhSach(SinhVien sv[], int soLuong) {
    printf("---------------------------------------------------------------------\n");
    printf("| STT | Ho va ten         | Tuoi | So dien thoai | email               |\n");
    printf("---------------------------------------------------------------------\n");
    for (int i = 0; i < soLuong; i++) {
        printf("| %-3d | %-18s | %-4d | %-12s | %-20s |\n",
               sv[i].stt, sv[i].hoVaTen, sv[i].tuoi, sv[i].soDienThoai, sv[i].email);
    }
    printf("---------------------------------------------------------------------\n");
}

int main() {
	// Danh sach sinh vien
	SinhVien danhSach[] = {
        {1, "Nguyen Van A", 20, "0904488481", "anv@rikkeiacademy.com"},
        {2, "Nguyen Van B", 21, "0904488482", "bnv@rikkeiacademy.com"},
        {3, "Nguyen Van C", 18, "0904488483", "cnv@rikkeiacademy.com"},
        {4, "Nguyen Van D", 19, "0904488484", "dnv@rikkeiacademy.com"},
        {5, "Nguyen Van E", 22, "0904488485", "env@rikkeiacademy.com"},
        {6, "Nguyen Van F", 21, "0904488486", "fnv@rikkeiacademy.com"},
        {7, "Nguyen Van G", 23, "0904488487", "gnv@rikkeiacademy.com"},
        {8, "Nguyen Van H", 19, "0904488488", "hnv@rikkeiacademy.com"},
        {9, "Nguyen Van I", 18, "0904488489", "inv@rikkeiacademy.com"},
        {10, "Nguyen Van K", 21, "0904488480", "knv@rikkeiacademy.com"}
    };
    
    // So luong sinh vien
    int soLuong = sizeof(danhSach) / sizeof(danhSach[0]);
    
    // In danh sach sinh vien
    inDanhSach(danhSach, soLuong);
    
    return 0;
}
