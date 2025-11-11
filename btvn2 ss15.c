#include <stdio.h>
int tinhTongChuSo(int n) {
    int tong = 0;
    int so = n;

    if (so < 0) {
        so = -so;
    }

    while (so > 0) {
        tong += so % 10;  
        so /= 10;         
    }

    return tong;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    printf("Tong cac chu so trong %d la: %d\n", n, tinhTongChuSo(n));

    return 0;
}
