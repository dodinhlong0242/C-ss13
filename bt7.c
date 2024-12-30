#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        									printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    										printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    										printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    inputArray(arr, n);
    printArray(arr, n);

    int max = findMax(arr, n);
    										printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}

