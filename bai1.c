#include <stdio.h>
#include <math.h>

int main(){
    int a[100];
    int n,max;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("day so vua nhap la: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    for (int i = 0; i < n; i++){
        max = a[0];
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("\nMax = %d \n",max);
    for (int i = 0; i < n; i++){
        if(max % 5 == 0){
            printf("max chia het cho 5\n");
            break;
        }else{
            printf("max khong chia het cho 5\n");
            break;
        }
    }
    int S = 0;
    for (int i = 0; i < n; i++){
        if(a[i] < 0 || a[i] % 2 ==0){
            S = S + a[i];
        }
    }
    printf("TBC : %.2f\n", (float)S/n);
    if((float)S/n > 4.0){
        printf("TBC lon hon 4.0");
    }else{
        printf("TBC nho hon 4.0");
    }
}