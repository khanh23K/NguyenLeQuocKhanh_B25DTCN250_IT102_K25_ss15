#include <stdio.h>
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            return mid;
        }else if (arr[mid] < x) {
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, arr[100], x, i;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang (theo thu tu tang dan):\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nNhap phan tu can tim: ");
    scanf("%d", &x);

    int result = binarySearch(arr, n, x);

    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri chi so %d\n", x, result);
    }else{
        printf("Khong tim thay phan tu %d trong mang.\n", x);
	}
	
    return 0;
}

