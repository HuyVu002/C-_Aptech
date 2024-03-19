#include <stdio.h>

int BCLN(int a,int b){
    int i=a;
    while(true){
        if(i%a==0 && i%b==0){
            return i;
        }
        i++;
    }
}
int main(){
    int a,b;
    printf("nhap 2 so: ");
    scanf("%d%d", &a,&b);
    printf("%d",BCLN(a,b));
}