#include <stdio.h>
void capNhatGiaTri(int *mang, int viTri, int giaTri) {
    *(mang + viTri) = giaTri;
}
void inMang(int *mang) {
    for (int i = 0; i < 5; i++) {
        printf("vi tri %d : %d\n", i, *(mang + i));
    }
}
int main() {
    int mang[5] = {1,11,2008,345,231};
    int viTriCapNhat, giaTriMoi;
    printf("Mang hien tai:\n");
    inMang(mang);
    printf("Nhap vao vi tri muon cap nhat: ");
    scanf("%d", &viTriCapNhat);
    if (viTriCapNhat < 0 || viTriCapNhat > 5) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    printf("Nhap vao gia tri moi: ");
    scanf("%d", &giaTriMoi);
    capNhatGiaTri(mang, viTriCapNhat, giaTriMoi);
    printf("Mang moi:\n");
    inMang(mang);
    return 0;
}

