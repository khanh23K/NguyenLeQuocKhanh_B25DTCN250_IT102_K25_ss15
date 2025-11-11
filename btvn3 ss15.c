#include <stdio.h>
int daoNguocSo(int n) {
    int dao = 0;
    int so = n;

    int laAm = 0;
    if (so < 0) {
        laAm = 1;
        so = -so;
    }

    while (so != 0) {
        dao = dao * 10 + so % 10;  
        so /= 10;                  
    }

    if (laAm)
        dao = -dao;

    return dao;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    printf("So dao nguoc cua %d la: %d\n", n, daoNguocSo(n));

    return 0;
}

