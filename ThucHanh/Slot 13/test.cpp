#include <stdio.h>

int main() {
    int n, i, j, maxCount, count;

    // Nhập số lượng phần tử của mảng
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Xác định và in ra các số trùng lặp nhiều nhất trong mảng
    maxCount = 0;
    printf("Cac so trung lap nhieu nhat trong mang la:\n");
    for (i = 0; i < n - 1; i++) {
        count = 1;

        // Đếm số lần xuất hiện của mỗi phần tử trong mảng
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Kiểm tra xem có phải là số trùng lặp nhiều nhất hay không
        if (count > maxCount) {
            maxCount = count;
        }
    }

    // In ra các số trùng lặp nhiều nhất
    for (i = 0; i < n - 1; i++) {
        count = 1;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // In ra số trùng lặp nhiều nhất
        if (count == maxCount) {
            printf("%d\n", arr[i]);
        }
    }
 
    return 0;
}
