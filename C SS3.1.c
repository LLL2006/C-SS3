#include <stdio.h>

int main() {
    char ten[50];

    printf("Nhap ten cua ban: ");
    fgets(ten, sizeof(ten), stdin);  // �oc t�n tu b�n ph�m, bao gom ca khoang trang

    // Loai bo k� tu xuong d�ng (neu c�) do fgets th�m v�o
    

    printf("Xin chao %s!\n", ten);

    return 0;
}

