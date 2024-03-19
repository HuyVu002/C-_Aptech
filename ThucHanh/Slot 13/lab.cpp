// Viết các chương trình sau:

// 1. Nhập vào 1 mảng n số nguyên. Đảo ngược thứ tự(vị trí) các phần tử của mảng

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("nhap kich thuoc arr: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("arr ban dau:\n");

    for(int i=0;i<n;i++){
        printf("arr[%d]=%d\t",i,arr[i]);

    }
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("\narr dao nguoc:\n");

    for(int i=0;i<n;i++){
        printf("arr[%d]=%d\t ",i,arr[i]);
    }
// 2. Nhập 1 mảng n số nguyên. Tìm giá trị xuất hiện nhiều nhất trong mảng đó
    // int maxCount=0,bienLap;

    // for(int i=0;i<n;i++){
    //     int count=1;         // count đặt trong for để reset mỗi lần kiểm tra lặp

    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     if(maxCount<count){
    //         maxCount=count;
    //     }
    //     if (count == maxCount) {        // nếu có giá trị lặp lại với số lần = nhau thì printf
    //                                     // nếu không có case đó xảy ra thì count vẫn = maxCount khi kết thúc vòng lặp
    //                                     // -> vẫn printf đc max duplicate value
    //         if(maxCount > 1){  // lí do đặt count = 1 chứ ko phải là 0
    //                         // nếu có ko có giá trị nào lặp lại thì -> maxCount = 1 -> vào nhánh else
    //             printf("gia tri lap lai nhieu nhat la: %d\n", arr[i]);
    //         }else{
    //             printf("khong co gia tri trung lap");
    //             break;
    //         }
    //     }
    // }

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}


	int arr2[n];
	int max = 0;
	for(int i=0;i<n;i++){
		int m = 0;
		for(int j=0;j<n;j++){
			if(arr[i] == arr[j]){
				m++;
			}
		}
		if(m>max){
			max = m;
		}
		arr2[i] = m;
	}

	printf("Danh sach xuat hien nhieu nhat:\n");
	int prev_print = arr[0];
	if(arr2[0] == max){
		printf("%d\t",arr[0]);
	}
	for(int i=1;i<n;i++){
		if(arr2[i] == max && arr[i] != prev_print){
			prev_print = arr[i];
			printf("%d\t",arr[i]);
		}
	}
}


// 3. Viết một chương trình để đếm số lượng số âm và số dương trong một mảng.

#include <stdio.h>
int main() {
    int n;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; ++i) {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int soLuongAm = 0;
    int soLuongDuong = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            soLuongAm++;
        } else if (arr[i] > 0) {
            soLuongDuong++;
        }
    }
    printf("So luong so am: %d\n", soLuongAm);
    printf("So luong so duong: %d\n", soLuongDuong);
}

// 4. Xác định và in ra các số trùng lặp trong một mảng.

#include <stdio.h>
int main() {
    int n;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }

    printf("Cac so trung lap trong arr:\n");

    for (int i = 0; i < n; ++i) {
        int daInRa = 0; // Biến kiểm tra xem số đã được in ra hay chưa

        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                daInRa = 1; // Đánh dấu là số đã được in ra
                break;
            }
        }

        if (!daInRa) {
            for (int j = i + 1; j < n; ++j) {
                if (arr[i] == arr[j]) {
                    daInRa = 1; // Đánh dấu là số đã được in ra
                    break;
                }
            }

            if (daInRa) {
                printf("%d\n", arr[i]);
            }
        }
    }
}


// 5. Nhập vào 1 mảng n số nguyên, tìm số nguyên tố lớn nhất trong mảng
//     int max=0,count=0;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=arr[i];j++){
//             if(arr[i]%j==0){
//                 count++;
//             }
//             if(count==2){
//                 if(max<arr[i]){
//                     max=arr[i];
//                 }
//             }
//         }
//     }
//     printf("SNT max = %d", max);
// }
// 6. Nhập vào 1 mảng n số nguyen, tìm dãy 3 số liên tiếp trong mảng mà đủ điều kiện làm 3 cạnh của 1 tam giác.

#include <stdio.h>

int main() {
    int n;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; ++i) {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Cac day 3 so lien tiep tao thanh canh cua tam giac:\n");

    for (int i = 0; i < n - 2; ++i) {
        int a = arr[i];
        int b = arr[i + 1];
        int c = arr[i + 2];

        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            printf("%d, %d, %d\n", a, b, c);
        }
    }
}


