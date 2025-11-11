#include <stdio.h>
int i;
int tinhTongMang(int a[], int n) {
    int tong = 0;
    for ( i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

int main() {
    int n,i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Tong tat ca cac phan tu trong mang la: %d\n", tinhTongMang(a, n));

    return 0;
}

