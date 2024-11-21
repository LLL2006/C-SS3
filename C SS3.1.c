#include <stdio.h>

int main() {
    char ten[50];

    printf("Nhap ten cua ban: ");
    fgets(ten, sizeof(ten), stdin);  // Ðoc tên tu bàn phím, bao gom ca khoang trang

    // Loai bo ký tu xuong dòng (neu có) do fgets thêm vào
    

    printf("Xin chao %s!\n", ten);

    return 0;
}

