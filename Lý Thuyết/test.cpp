#include <stdio.h>
int main(){
    // int max;
    // int a,b,c;
    // printf("nhap a:");
    // scanf("%d",&a);
    // printf("nhap b:");
    // scanf("%d",&b);
    // printf("nhap c:");
    // scanf("%d",&c);
    // max=a;
    // if(b>=max){
    //     max=b;
    // }
    // if(c>=max){
    //     max=c;
    // }
    // printf("Max  = %d",max);
    // if(a>b){
    //     if(a>c){
    //         printf("max:%d",a);
    //     }else{
    //         printf("Max:%d",c);
    //     }
    // }else{
    //     if(b>=c){
    //         printf("max:%d",b);
    //     }else{
    //         printf("max:%d",c);
    //     }
    // }
    int tk;
    printf("nhap so tien gui ban dau:");
    scanf("%d", &tk);
    int y=0;
    while(tk<=4000000){
        tk=tk+tk*0.08;
        y++;
    }
    printf("so nam = %d",y);
}
// %c là char    # 8 bit
// %d là int     # 16bit
// %f là float   # 32 bit
// %lf là double # 64 bit
// trong phép tính kết quả sẽ dựa vào kiểu dữ liệu lớn hơn
// vd : int/float -> 2/2.0=1.0
// thứ tự thực hiện các phép: Not, &&, ||

// kiểu dữ liệu có tác dụng gì trong ngôn ngữ lập trình?
// xin int thì cho int, xin float thì cho float chứ 0 thể cho bừa đc

// %f\n xuống dòng

