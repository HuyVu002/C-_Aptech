#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
    // int x=10;
    // int *p; // biến con trỏ
    
    // cout << "Gia tri cua x = " << x << endl;
    // cout << "Dia chi cua x: " << &x << endl;
    // cout << "Dia chi cua p: " << &p << endl;

    // p = &x; // chỉ gán được địa chỉ của biến # cho p chứ p ko thể nhận giá trị
    // cout << *p << endl; // *p là mang giá trị của x (10)

    // x++;
    // cout << x << endl;

    // (*p)++; // không đóng mở ngoặc thì ko cộng
    // cout << x << endl;

    // int arr[10]; // nếu thay = n thì khi muốn thay đổi danh sách đã nhập rồi thì vẫn ph nhập lại;
    
    // nên muốn thay đổi kích thước động -> ph dùng con trỏ

    int *arr;
    // cách 1
    arr = (int *)malloc(10 *sizeof(int));// dùng tiếp vs mảng đang có
    // cách 2
    arr = (int *)calloc(10,sizeof(int)); // sau khi cấp sẽ làm sạch các ô nhớ về 0 

    // phần cũ khi chưa biết cần thêm bao nhiêu:
    for(int i=0;i<10;i++){
        *(arr+i) = i*10 + 2;
    }

    // muốn nhập lại chỉnh sửa kích cỡ lên 15:
    arr = (int *)realloc(arr, 15*sizeof(int));
    // nhập phần thêm:
    for(int i=0;i<15;i++){
        *(arr+i) = i*10 + 2;
    }

    // khi dùng xog muốn giải phóng ô nhớ để dùng tiếp với bài sau:
    //cách 1:
    arr = (int *)realloc(arr, 0*sizeof(int));
    // cách 2:
    free(arr);
    
}