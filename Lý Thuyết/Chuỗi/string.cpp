#include <stdio.h>
#include <string.h>
int main(){
    char arr[5][5]; // 5 chuỗi mỗi chuỗi có 5 kí tự

    for(int i=0;i<5;i++){
        printf("nhap chuoi thu %d: ",i+1);
        scanf("%s",arr[i]);
    }
    for(int i=0; i<5-1;i++){
        for(int j=0;j<5-i-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                char temp[5];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
    printf("chuoi sau khi duoc sap xep:\n");
    for(int i=0;i<5;i++){
        printf("%s\n",arr[i]);
    }
}

    // 5. Viết chương trình nhập vào thông tin 5 sinh viên(tên, điểm thi),
    // sau đó sắp xếp mảng này theo thứ tự điểm từ cao đến thấp.

#include <stdio.h>
#include <string.h>
typedef struct Student{
    char name[5];
    int point;
}SV;
int main(){
    SV sv[5];
    for(int i=0;i<5;i++){
        printf("\nNhap ten sinh vien thu %d:",i+1);
        scanf("%s",sv[i].name);

        printf("\nNhap diem:");
        scanf("%d", &sv[i].point);
    }

    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-i-1;j++){
            if(sv[j].point > sv[j+1].point){
                SV tmp;
                tmp.point=sv[j].point;
                sv[j].point=sv[j+1].point;
                sv[j+1].point=tmp.point;

                SV temp;
                strcpy(temp.name, sv[j].name);
                strcpy(sv[j].name, sv[j+1].name);
                strcpy(sv[j+1].name, temp.name);
            }
        }
    }
    printf("Danh sach sinh vien: ");
    for(int i=0;i<5;i++){
        printf("%s: %d\n",sv[i].name,sv[i].point);
    }
}


