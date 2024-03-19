#include <stdio.h>
#include <string.h>

int main() {
    char S[20];

    printf("Nhập vào một chuỗi: ");
    scanf("%s", S);

    int length = strlen(S);
    for (int i = 0; i < length; i++) {
        if(S[i]>=97){
            S[i]=S[i]-32;
        }else{
            S[i]=S[i]+32;
        }
    }
    printf("Chuỗi in hoa: %s\n", S);
}