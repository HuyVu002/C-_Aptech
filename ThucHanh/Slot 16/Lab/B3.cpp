#include <stdio.h>
#include <string.h>

int main() {
    char strings[5][100];

    // Nhập vào 5 chuỗi
    printf("Nhap vao 5 chuoi:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Chuoi %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    // Sắp xếp mảng chuỗi
    for (int i = 0; i < 5 - 1; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (strcmp(strings[i], strings[j]) > 0) {
                // Đổi chỗ hai chuỗi nếu chuỗi thứ i lớn hơn chuỗi thứ j
                char temp[100];
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    // In ra mảng sau khi sắp xếp
    printf("\nMang sau khi sap xep:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%s\n", strings[i]);
    }
}
