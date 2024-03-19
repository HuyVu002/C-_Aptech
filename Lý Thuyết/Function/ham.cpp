#include <stdio.h>
bool SNT(int n){

    // cách ngây thơ:
    // int count=0;
    // for(int i=1;i<=a;i++){
    //     if(a%i==0){
    //         count++;
    //     }
    // }
    // if(count==2){
    //     return true; // đã đi vào return thì dừng hàm luôn
    // }
    // return false;

    if(n<=1){
        return false;
    }
    if(n<4){ // if (n==2 || n==3) 
        return true;
    }
    for(int i=2; i <= n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    if(SNT(n)){
        printf("%d la SNT", n);
    }else{
        printf("%d khong la SNT",n);
    }
}











