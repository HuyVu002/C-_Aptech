#include <stdio.h>

int main() {
    int n;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // Kiểm tra n có lớn hơn 0 không
    if (n <= 0) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    // Khai báo mảng với n phần tử
    int mang[n];

    // Nhập các phần tử của mảng từ người dùng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);  // Sử dụng %d để nhập số nguyên
    }

    // Tìm số dương nhỏ nhất trong mảng
    int so_duong_nho_nhat = -1;  // Giả sử không có số dương trong mảng
    for (int i = 0; i < n; i++) {
        if (mang[i] > 0) {
            if (so_duong_nho_nhat == -1 || mang[i] < so_duong_nho_nhat) {
                so_duong_nho_nhat = mang[i];
            }
        }
    }

    // Hiển thị kết quả
    if (so_duong_nho_nhat != -1) {
        printf("So duong nho nhat trong mang la: %d\n", so_duong_nho_nhat);
    } else {
        printf("Khong co so duong trong mang.\n");
    }

    return 0;
}
