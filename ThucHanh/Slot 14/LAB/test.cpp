#include <stdio.h>

// viết hàm nhập các giá trị cho 1 mảng n số nguyên
int mang(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("arr[%d] = ");
        scanf("%d", &arr[n]);
    }
}
int main(){
    int n;
    printf("nhap kich co mang: ");
    scanf("%d", &n);

    int arr[n];
    mang(arr,n);
}   