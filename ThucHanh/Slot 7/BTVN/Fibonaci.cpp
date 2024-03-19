// Viết các chương trình sau:
// 1. Nhập 1 số n, tìm các ước và tính tổng ước của n
#include <stdio.h>
int main(){

    // int n;
    // printf("nhap so: ");
    // scanf("%d",&n);
    // int i=1;
    // int sum=0;
    // while(i<=n){
    //     if(n%i==0){
    //         sum+=i;
    //     }
    //     i++;        
    // }
    // printf("%d",sum);

// 2. Nhập 2 số a,b. Tìm ước chung lớn nhất và bội chung nhỏ nhất của a và b

    // int a,b;
    // printf("nhap 2 so :");
    // scanf("%d",&a);
    // scanf("%d",&b);
    // int i=a;
    // while(true){
    //     if(a%i==0 && b%i==0){
    //         printf("Uoc chung lon nhat la: %d",i);
    //         break;
    //     }
    //     i--;
    // }
    // printf("\n");
    // while(true){
    //     if(i%a==0 && i%b==0){
    //         printf("Boi chung nho nhat la: %d",i);
    //         break;
    //     }
    //     i++;
    // }

// 3. Tỉnh tổng các chữ số của 1 số nguyên n

    // int n;
    // printf("nhap so nguyen : ");
    // scanf("%d",&n);
    // int sum=0;
    // while(n>0){
    //     sum+=n%10;
    //     n/=10;
    // }
    // printf("tong cac chu so nguyen = %d",sum);

// 4. Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n

    // int n;
    // printf("nhap so nguyen duong: ");
    // scanf("%d",&n);
    // int first;
    // while(n>0){
    //     first=n%10;
    //     n/=10;
    // }
    // printf("chu so dau tien la: %d",first);

// 5. Tìm chữ số lớn nhất của số nguyên dương n

    // int n,max,chair=0;
    // printf("nhap so nguyen duong: ");
    // scanf("%d",&n);

    // while(n>0){
    //     max=n%10;
    //     if(max>chair)
    //         chair=max;
    //     n/=10;
    // }
    // printf("max = %d", chair);

// 6.  Nhập n sau đó tính S = 1 + 1/2 + 1/3 + … + 1/n

    // float S=0.0;
    // int n;
    // printf("nhap n:");
    // scanf("%d",&n);
    // int i=1;
    // while(i<=n){
    //     S=S+1.0/i;
    //     i++;
    // }
    // printf("S=%f",S);

    // float S=0.0;
    // int n;
    // printf("nhap n:");
    // scanf("%d",&n);
    // // int i=1;
    // while(n>=0){
    //     S=S+1.0/n;
    //     n--;
    // }
    // printf("S=%f",S);

// 7.  Nhập n sau đó tính n! ( giai thừa của n)

    // int n,G=1;
    // printf("nhap n: ");
    // scanf("%d",&n);
    // printf("%d! = ",n);
    // while(n>0){
    //     G*=n;
    //     n--;
    // }
    // printf("%d",G);

// 8. Nhập vào 1 số n ( số tự nhiên). Tìm số đứng ở vị trí thứ n trong dãy số Fibonaci.
    int n,s1=0,s2=1,next;
    printf("nhap n: ");
    scanf("%d",&n);
    if(n==1){
        next = s1;
    }else if(n==2){
        next=s2;
    }else{
        int i=2;
        while(i<=n){
            next=s1+s2;
            s1=s2;
            s2=next;
            i++;
        }
    }   
    printf("Số Fibonacci tiệm cận ở vị trí thứ %d là: %d\n", n,next);
}