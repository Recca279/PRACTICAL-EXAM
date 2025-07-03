#include <stdio.h>
int main(){
    int n,sum =0;
    printf("Nhap mot so nguyen duong n:");
    scanf("%d",&n);

    if(n<=0){
        printf("Hay nhap mot so nguyen duong lon hon 0.\n");
    }else{
        for(int i=1;i<=n;i++){
            sum =sum+i;
        }
        printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
    }
}
