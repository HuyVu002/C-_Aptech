#include <stdio.h>
#include <math.h>

int UCLN(int a,int b){
    int i=a;
    while(true){
        if(a%i==0 && b%i==0){
            return i;
        }
        i--;
    }
}
int main(){
    int a,b;
    printf("nhap 2 so: ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d",UCLN(a,b));
}