#include <stdio.h>

int main() {
    int arr[100];
    int currentLength;

    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &currentLength);

    if (currentLength <= 0 || currentLength > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap %d phan tu cho mang:\n", currentLength);
    for (int i = 0; i < currentLength; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int index;
    printf("Nhap vi tri can xoa (0-%d): ", currentLength - 1);
    scanf("%d", &index);

    if (index < 0 || index >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    for (int i = index; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;

    printf("Mang sau khi xoa phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

