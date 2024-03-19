// Bài tập 2:
// Viết hàm trung bình () để tính số nguyên trung bình của mảng.
// Mô tả hàm:
// Nguyên mẫu: float average(int s[],int n)
// Đầu vào: Array s[] with integer number , size of array n
// Đầu ra: Số trung bình của mảng

#include <stdio.h>

float average(int s[], int n) {
    if (n < 0) {
        printf("Mang khong co phan tu.\n");
        return 0;
    }

    int tong = 0;
    for (int i = 0; i < n; ++i) {
        tong += s[i];
    }

    return (float)tong / n;
}

int main() {
    int n;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    printf("So trung binh cua mang la: %f\n", average(arr, n));
}
