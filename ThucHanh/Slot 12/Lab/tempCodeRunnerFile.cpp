#include <stdio.h>

int main() {
    int n;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &n);

    int mang[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; ++i) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    // Tim gia tri nho nhat (a) va lon nhat (b) trong mang
    int a = mang[0];
    int b = mang[0];

    for (int i = 1; i < n; ++i) {
        if (mang[i] < a) {
            a = mang[i];
        }
        if (mang[i] > b) {
            b = mang[i];
        }
    }

    printf("Doan [a, b] chua tat ca cac gia tri trong mang la: [%d, %d]\n", a, b);
}