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