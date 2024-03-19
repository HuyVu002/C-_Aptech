

// Viết các chương trình sau:
// 1. Nhập vào mảng n số nguyên và 1 số nguyên x. Hãy tìm giá trị trong mảng số xa giá trị x nhất

#include <stdio.h>

int main() {
    int n, x;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &n);

    int mang[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; ++i) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);

    // Tìm giá trị trong mảng xa giá trị x nhất
    int giaTriXaNhat = mang[0]; // Giả sử giá trị đầu tiên là xa nhất ban đầu
    int khoangCachXaNhat = (mang[0] > x) ? (mang[0] - x) : (x - mang[0]); // Khoảng cách tuyệt đối đầu tiên

    for (int i = 1; i < n; ++i) {
        int khoangCachHienTai = (mang[i] > x) ? (mang[i] - x) : (x - mang[i]);

        if (khoangCachHienTai > khoangCachXaNhat) {
            khoangCachXaNhat = khoangCachHienTai;
            giaTriXaNhat = mang[i];
        }
    }

    printf("Gia tri trong mang xa gia tri x nhat la: %d\n", giaTriXaNhat);
}

// 2. Nhập vào  mảng n số nguyên và 1 số nguyên x. Hãy tìm giá trị trong mảng số gần giá trị x nhất

#include <stdio.h>

int main() {
    int n, x;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &n);

    int mang[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; ++i) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);

    // Tìm giá trị trong mảng gần giá trị x nhất
    int giaTriGanNhat = mang[0];
    int khoangCachGanNhat = (mang[0] > x) ? (mang[0] - x) : (x - mang[0]);

    for (int i = 1; i < n; ++i) {
        int khoangCachHienTai = (mang[i] > x) ? (mang[i] - x) : (x - mang[i]);

        if (khoangCachHienTai < khoangCachGanNhat) {
            khoangCachGanNhat = khoangCachHienTai;
            giaTriGanNhat = mang[i];
        }
    }

    printf("Gia tri trong mang gan gia tri x nhat la: %d\n", giaTriGanNhat);
}

// 3. Cho mảng  n số nguyên, hãy tìm đoạn [a, b] trên trục số nguyên sao cho đoạn này chứa tất cả các giá trị trong mảng

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


// 4. Cho mảng  n số nguyên  , hãy tìm giá trị x sao cho đoạn [-x, x] trên trục số nguyên chứa tất cả các giá trị trong mảng

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

    // Tim gia tri lon nhat trong mang
    int giaTriLonNhat = mang[0];

    for (int i = 1; i < n; ++i) {
        if (mang[i] > giaTriLonNhat) {
            giaTriLonNhat = mang[i];
        }
    }

    // Tim gia tri x sao cho doan [-x, x] chua tat ca cac gia tri trong mang
    int x = giaTriLonNhat;

    printf("Gia tri x sao cho doan [-x, x] chua tat ca cac gia tri trong mang la: %d\n", x);

    return 0;
}

// 5 <optional>  Nhập 1 mảng n số nguyên, đảm bảo các số nhập vào không bị trùng nhau.
#include <stdio.h>

int main() {
    int n;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &n);

    // Kiểm tra kích thước mảng hợp lệ
    while (n <= 0) {
        printf("Kich thuoc cua mang phai lon hon 0. Nhap lai: ");
        scanf("%d", &n);
    }

    int mang[n];

    printf("Nhap cac phan tu cua mang:\n");

    // Nhập các phần tử và kiểm tra trùng lặp
    for (int i = 0; i < n; ++i) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &mang[i]);

        // Kiểm tra trùng lặp
        for (int j = 0; j < i; ++j) {
            if (mang[i] == mang[j]) {
                printf("Phan tu da bi trung lap. Nhap lai: ");
                --i; // Nếu trùng lặp, giảm i để nhập lại giá trị tại vị trí i
                break;
            }
        }
    }

    printf("Mang sau khi nhap:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", mang[i]);
    }

}
