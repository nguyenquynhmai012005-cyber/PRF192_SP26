//chuy?n sang  bai 5 dung do....whlie => debug

#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Nhap cac so nguyen duong (nhap 0 de dung):\n");

    do {
        printf("Nhap so: ");
        scanf("%d", &n);
        printf("DEBUG: sum = %d\n", sum);
        if (n > 0) {
            sum += n;
        }

    } while (n != 0);   
    printf("DEBUG: ket thuc vong lap\n");
    printf("Tong cac so nguyen duong da nhap la: %d\n", sum);

    return 0;
}