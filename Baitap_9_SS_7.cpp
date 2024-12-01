#include <stdio.h>
#define MAX_SIZE 100 

int main() {
    int arr[MAX_SIZE];
    int n;            

    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &n);


    if (n < 1 || n > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

 
    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int value, position;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (0-%d): ", n);
    scanf("%d", &position);
    if (position < 0 || position > n || n >= MAX_SIZE) {
        printf("Vi tri khong hop le hoac mang da day!\n");
        return 1;
    }
    for (int i = n; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    ++n; 
    printf("Mang sau khi chen: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

