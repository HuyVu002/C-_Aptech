#include <stdio.h>
#include <math.h>

int dienTich(int a,int b, int c){
    if(a+b>c & b+c>a & a+c>b){
        int p=a+b+c;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }

}
int main(){
    int a,b,c;
    printf("nhap 3 canh tam giac: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("%d",dienTich(a,b,c));
}