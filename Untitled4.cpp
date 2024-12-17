#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n];
    printf("Nhap %d phan tu cho mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("\nM?ng b?n dã nh?p là:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: %d\n", i + 1, mang[i]);
    }
    return 0;
}

