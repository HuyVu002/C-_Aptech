// 1. Tính chu vi tam giác


#include <stdio.h>
#include <math.h>
int chuvi(int a,int b,int c){
    if(a+b>c & b+c>a & a+c>b){
        return a+b+c;
    }

}
int main(){
    int a,b,c;
    printf("nhap 3 canh tam giac: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("%d",chuvi(a,b,c));
}












