#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,p;
    float S;
    printf("nhap 3 canh a,b,c: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    p=a+b+c;
    S=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
    if(a*b*c>0){
        if(a+b>c){
            if(b+c>a){
                if(a+c>b){
                    printf("chu vi = %lf",p);
                    printf("%c\n");
                    printf("dien tich = %lf",S);
                }else{printf("khong du dieu kien 3 canh");
            }}else{printf("khong du dieu kien 3 canh");}
        }else{printf("khong du dieu kien 3 canh");}
    }else{printf("khong du dieu kien 3 canh");}
    // if((a+b>c) && (a+c>b) && (b+c>a)){
    //     printf("chu vi = %f",p);
    //     printf("%c\n");
    //     printf("dien tich = %f",S);
    // }else{printf("khong du dieu kien 3 canh");}
}