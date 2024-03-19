#include <stdio.h>
int main(){
    int arr[10];
    int i, Max;

    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<10; i++){
        if(Max < arr[i]){
            Max = arr[i];
        }
    }
    int Max_2 = Max;
    for(i=0; i<10; i++){

        if(arr[i] != Max){
            Max_2 = arr[i];
            break;
        }
    }
    if(Max_2 == Max){
        printf("mang bi lap so");
    }else{
        for(i=0; i<10; i++){
            if(arr[i] > Max_2 && arr[i] < Max){
                Max_2 = arr[i];
            }
        }
        printf("Max 2 = %d", Max_2);
    }
}