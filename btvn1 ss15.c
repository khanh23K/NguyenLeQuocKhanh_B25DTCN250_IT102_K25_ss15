#include <stdio.h>
int tinhHieu(int a, int b) {
    return a - b;
}
int tinhTich(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);
    
    printf("Hieu cua %d va %d la: %d\n", x, y, tinhHieu(x, y));
    printf("Tich cua %d va %d la: %d\n", x, y, tinhTich(x, y));
    
    return 0;
}

