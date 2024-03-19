// Bài tập 1:
// Viết chương trình nhập vào một dãy số nguyên từ bàn phím. Cho số chẵn cuối cùng của
// mảng nếu không có số chẵn thì hiển thị “No Even number”

#include <stdio.h>
int main(){
    int n;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    int Even=1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]!=0){
            Even = arr[i];
        }
    }
    if(Even != 1){
        printf("so chan cuoi cung trong mang la: %d",Even);
    }else{
        printf("No Even number\n");
    }
}