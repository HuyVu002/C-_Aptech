#include <stdio.h>
int main(){
    // for(int i=0;i<=2;i++){
    //     for(int j=0;j<=4;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=5;i++){
    //     int ss=i;
    //     if(ss%2==1){
    //         ss=5;
    //     }
    //     if(ss%2==0){
    //         ss=4;
    //     }
    //     for(int j=1;j<=ss;j++){
    //             printf("*");
    //     }
    //     printf("\n");
    // }

    // for(int i=0;i<=5;i++){
    //     for(int j=0;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for(int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
            for(int k=0;k<=i;k++){
                printf("*");
            }printf("\t");
        }printf("\n");
    }
}
