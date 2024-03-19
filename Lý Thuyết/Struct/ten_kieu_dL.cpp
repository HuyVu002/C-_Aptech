#include <stdio.h>

typedef struct Class
{
    char name[20];
    char room[10];
}C;

typedef struct Student{       // một khối dữ liệu
    char name[50];
    int writeMark;
    int pracMark;
    int asmMark;
    C myClass;
}S;
// typedef giup doi ten "struct Student" thanh S
int main(){
    int x;
    S sv;

    printf("Nhap ten sinh vien: ");
    scanf("%s",sv.name);

    printf("\nNhap diem ly thuyet: ");
    scanf("%d", &sv.writeMark);

    printf("\nNhap diem thuc hanh:");
    scanf("%d",&sv.pracMark);

    printf("\nNhap diem qua trinh:");
    scanf("%d",&sv.asmMark);

    printf("\nNhap ten lop hoc:");
    scanf("%s",sv.myClass.name);
}