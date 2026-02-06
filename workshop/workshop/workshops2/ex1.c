// Tinh tien taxi
#include <stdio.h>

int main() {
    float soKm;
    int soPhutCho;

    printf("Nhap vao soKm: ");
    int kq = scanf("%f", &soKm);

    if (kq != 1 || soKm <= 0) {
        printf("Nhap sai!");
        return 0;
    }

    printf("Nhap vao so phut cho: ");
    kq = scanf("%d", &soPhutCho);

    if (kq != 1 || soPhutCho < 0) {
        printf("Nhap sai!");
        return 0;
    }

    float tongTien;

    if (soKm <= 0.5)
        tongTien = 12000;
    else if (soKm <= 30)
        tongTien = 12000 + (soKm - 0.5) * 1500;
    else
        tongTien = 12000 + 29.5 * 1500 + (soKm - 30) * 1200;

    if (soPhutCho > 5)
        tongTien = tongTien + (soPhutCho - 5) * 1000;

    printf("%-10s %-20s %-20s\n", "So km", "So Phut cho", "Tong Tien");
    printf("%-10.1f %-20d %-20.0f", soKm, soPhutCho, tongTien);

    return 0;
}