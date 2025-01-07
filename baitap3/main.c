#include <stdio.h>
int tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
    return 0;
}
int main() {
    int a = 1, b = 11;
    int ketQua;
    tinhTong(a, b, &ketQua);
    printf("Tong cua %d va %d la: %d\n", a, b, ketQua);

    return 0;
}
