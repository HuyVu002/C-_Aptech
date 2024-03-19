#include <stdio.h>
int main(){
    // int i,temp,arr[5]={1,7,5,12,10};
    // for(int i=0;i<5;i++){
    //     for(int j = 0 ; j < 5-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     } 
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d\t",arr[i]);
    // }

    // int data[5] = {1,7,5,12,10};
    // int tmp,i,j;
    // for(j=1;j<5;j++){
    //     i=j-1;
    //     tmp=data[j];
    //     while((i>=0)&&(tmp<data[i])){
    //         data[i+1]=data[i];
    //         i--;
    //     }
    //     data[i+1] = tmp;
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d\t",data[i]);
    // }

    int data[] = {0,11,13,14,15,17,18};
    int low=0;
    int high=6;
    int search=15;
    int flag=0;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(search == data[mid]){
            flag=1;
            printf("found at index %d\n", mid);
            break;
        }else if(search <data[mid]){
            high = mid-1;
        }else if(search > data[mid]){
            low = mid+1;
        }
    }
    if(flag==0){
        printf("Element not found in the array");
    }
}