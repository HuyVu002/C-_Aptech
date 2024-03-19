// Vẽ Flowchart và viết code C cho các chương trình dưới đây:
// Yêu cầu người dùng nhập vào một số nguyên dương n, 
// sau đó viết chương trình để kiểm tra xem n có phải là số nguyên tố hay không.
// Viết chương trình để kiểm tra xem một số nguyên dương n có phải là số hoàn hảo hay không.
// Số hoàn hảo là số mà tổng các ước số của nó (không kể chính nó) bằng chính nó.

#include <stdio.h>
#include <math.h>
int main(){
    // int n;
    // printf("nhap n: ");
    // scanf("%d",&n);
    // int count=0;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0)
    //         count+=1;   
    // }
    // if(count==2){
    //     printf("%d la so nguyen to",n);
    // }else{
    //     printf("%d khong la so nguyen to",n);
    // }

//     int sum=0;
//     for(int i=1;i<n;i++){
//         if(n%i==0)
//             sum+=i;   
//     }
//     if(sum==n){
//         printf("%d la so hoan hao",n);
//     }else{
//         printf("%d khong la so hoan hao",n);
//     }
// }



// Viết chương trình yêu cầu người dùng nhập vào 1 số trong khoảng từ 1 đến 100 
// (tức là bắt buộc người dùng phải nhập đúng số yêu cầu mới được dừng lại)
// Viết chương trình yêu cầu người dùng nhập vào 3 số là độ dài 3 cạnh của tam giác, 
// sau đó tính chu vi và diện tích tam giác (nếu nhập không đúng phải nhập lại)
 
    // int n;
    // for(int i=1;i<=100;i++){    
    //     printf("nhap tu 1-100: ");
    //     scanf("%d",&n);
    // }
    int a,b,c;
    int p=a+b+c;
    printf("nhap vao 3 canh tam giac: ");
    while(scanf("%d%d%d",&a,&b,&c)){
        if((a+b>c) & (a+c>b) & (b+c>a)){
            float p2=p/2.0;
            float S=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
            printf("chu vi = %d",p);
            printf("\ndien tich = %d ",S);
            break;
        }else{
            printf("vui long nhap lai: ");
            continue;
        }
    }
}
