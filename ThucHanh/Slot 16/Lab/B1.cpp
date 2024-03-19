#include <stdio.h>
#include <string.h>

int main() {
    char S[20];

    printf("Nhập vào một chuỗi: ");
    scanf("%s", S);

    int length = strlen(S);
    for (int i = 0; i < length / 2; i++) {
        char temp = S[i];
        S[i] = S[length - 1 - i];
        S[length - 1 - i] = temp;
    }
    printf("Chuỗi đảo ngược: %s\n", S);
}
