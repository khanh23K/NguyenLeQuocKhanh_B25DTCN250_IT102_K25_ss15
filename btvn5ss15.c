#include <stdio.h>
void timPhanTuXuatHienNhieuNhat(int arr[], int n, int *giaTri, int *tanSuat) {
    int maxCount = 0;
    int value = arr[0];
    int i, j;

    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            value = arr[i];
        }
    }

    *giaTri = value;
    *tanSuat = maxCount;
}

int main() {
    int n, i, arr[100];
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int giaTri, tanSuat;
    timPhanTuXuatHienNhieuNhat(arr, n, &giaTri, &tanSuat);

    printf("\nPhan tu xuat hien nhieu nhat la: %d\n", giaTri);
    printf("So lan xuat hien: %d\n", tanSuat);

    return 0;
}
