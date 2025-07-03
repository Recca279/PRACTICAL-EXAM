#include <stdio.h>

int isPrime(int n){
    if(n < 2) 
        return 0;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) 
            return 0;
    }

    return 1;
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    int KetQua = isPrime(n);
    printf("Gia tri tra ve cua isPrime(%d) la: %d\n", n, KetQua);

    if(KetQua == 1){
        printf("%d la so nguyen to.\n", n);
    }else{
        printf("%d KHONG phai la so nguyen to.\n", n);
    }

    return 0;
}