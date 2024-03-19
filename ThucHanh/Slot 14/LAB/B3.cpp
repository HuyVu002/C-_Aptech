// 3. Tỉnh tổng các chữ số của 1 số nguyên n

#include <stdio.h>
#include <math.h>

int tongInt(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("%d", tongInt(n));
}