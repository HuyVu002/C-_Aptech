// BAI 1:
    // Viết một chương trình tính chỉ số BMI của người dùng. 
    // Hỏi người dùng cân nặng (kg) và chiều cao (m), sau đó tính BMI bằng công thức:
    // BMI = cân nặng / (chiều cao * chiều cao). 
    // In ra thông báo về tình trạng cân nặng (gầy, bình thường, thừa cân, béo phì) dựa trên các khoảng BMI thường được sử dụng.
#include <stdio.h>
#include <math.h>
int main(){
//     float weight,height;
//     printf("can nang cao va chieu cao cua ban la :");
//     scanf("%f",&weight);
//     scanf("%f",&height);
//     float BMI=weight/(height*height);
//     if(BMI<18.5){
//         printf("Gay");
//     }else if(18<BMI<24.9){
//         printf("Binh Thuong");
//     }else if(25<BMI<29.9){
//         printf("Tang can");
//     }else{
//         printf("Beo Phi");
//     }
// }

// BAI 2:
    // Viết chương trình kiểm tra xem một năm nhập vào có phải là năm nhuận hay không.
    //  Một năm là năm nhuận nếu chia hết cho 4.
    //  Tuy nhiên, nếu năm đó chia hết cho 100, thì nó chỉ là năm nhuận nếu cũng chia hết cho 400.

//     int year;
//     printf("nhap nam ma ban muon:");
//     scanf("%d",&year);
//     if(year%4==0|year%400==0){
//         printf("Nam nhuan");
//     }else{
//         printf("Khong phai nam nhuan");
//     }
// }

// BAI 3:
    // Nhập một ký tự từ người dùng. 
    // Kiểm tra xem ký tự đó là chữ cái in hoa, chữ cái in thường, số hay ký tự đặc biệt.
    char k;
    printf("Nhap ki tu ban muon:");
    scanf("%c",&k);
    if((k>= 'a') && (k<='z')){
        printf("Chu thuong");
    }
    else if((k>= 'A') && (k<='Z')){
        printf("Chu hoa");
    }
    else if((k>='1')&&(k<='9')){
        printf("Ky tu so");
    }
    else{
        printf("Ky tu khac");
    }
}