// Viết các chương trình sau:
// 1. Tính trung bình cộng các số lẻ trong mảng n số

#include <stdio.h>
int main(){
//     int n,sum=0;
//     printf("nhap so phan tu mang ban muon:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("nhap cac phan tu cua mang:");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         if(arr[i]%2!=0){
//             sum+=arr[i];
//         }
//     }
//     printf("Tong cac so le trong mang = %d",sum);
// }

// 2. Tính trung bình cộng các số lẻ ở vị trí chẵn trong mảng n số

//     int n,sum=0;
//     printf("nhap kich co mang:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("nhap cac phan tu cua mang:");
//     int count = 0;
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         if(arr[i]%2!=0 && i%2==0){
//             sum+=arr[i];
//             count++;
//         }
//     }
//     printf("Tong cac so le o vi tri chan trong mang = %d",sum/count);
// }


// 3. Nhập vào 1 mảng n số nguyên, sau đó nhập 1 số x. Tìm xem có x trong mảng không.

//     printf("nhap kich co mang: ");
//     int n;
//     scanf("%d",&n);

//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         printf("nhap phan tu chi so %d:",i);
//         scanf("%d", &arr[i]);
//     }
//     printf("nhap so can tim: ");
//     int x,flag=0;
//     scanf("%d", &x);

//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             flag=1;
//             break;
//         }
//     }
//     if(flag){
//         printf("%d o trong mang nay",x);
//     }else{
//         printf("%d khong co trong mang",x);
//     }
// }
// 4. Nhập mảng n số nguyên, tìm số lẻ cuối cùng của mảng

//     int n;
//     printf("nhap kich co mang: ");
//     scanf("%d", &n);
    
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("nhap phan tu thu %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int le;
//     for(int i=n-1;i>=0;i--){
//         if(arr[i]%2!=0){
//             le=arr[i];
//             break;
//         }
//     }
//     printf("so le cuoi cung trong mang la: %d",le);
// }


// 5. Nhập mảng n số nguyên, tìm số dương nhỏ nhất

//     int n;
//     printf("nhap kich co mang: ");
//     scanf("%d", &n);
    
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("nhap phan tu thu %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int duong=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i] > 0){
//             if(duong < 0 || arr[i] < duong){
//                 duong=arr[i];
//             }
//         }
//     }
//     if(duong >= 0)
//         printf("so duong nho nhat trong mang la: %d",duong);
//     else
//         printf("mang khong co so duong");
// }

// 6. Nhập mảng n số nguyên, tìm số lượng các số dương liên tiếp nhiều nhất

//     int n;
//     printf("nhap kich thuoc mang: ");
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0;i<n;i++){
//         printf("nhap phan tu thu %d: ",i+1);
//         scanf("%d", &arr[i]);
//     }
//     int count=0;
//     int max=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             count++;
//             if(count>max){
//                 max=count;
//             }
//         }else{
//             count=0;
//         }
//     }
//     if(max>0){
//         printf("so luong so duong lien tiep nhieu nhat la: %d",max);
//     }else{
//         printf("mang khong co so duong");
//     }
// }
// 7. Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu

//     int n;
//     printf("nhap kich thuoc mang: ");
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0;i<n;i++){
//         printf("nhap phan tu thu %d: ",i+1);
//         scanf("%d", &arr[i]);
//     }
//     int count=0;
//     int sum=0,max=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             count++;
//             sum+=arr[i];
//             if(sum>max){
//                 max=sum;
//             }
//         }else{
//             count=0;
//             sum=0;
//         }
//     }
//     if(count>0){
//         printf("chuoi so duong lon nhat la: %d",max);
//     }else{
//         printf("mang khong co so duong");
//     }
// }

// Ví dụ:  Mảng  1 2  0 - 2 9 8 1 -4 16 15 0 -1 2

// 6.  Kết quả là 3 ( vì có 3 số liên tiếp dương: 9 8 1)

// 7. Kết quả là 31 ( vì tổng 16 + 15 là lớn nhất)

