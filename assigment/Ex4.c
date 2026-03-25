#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    float grade;
};

int main() {
    int n, i;

    printf("Nhap n: ");
    scanf("%d", &n);

    struct SinhVien sv[100];

    // Nhap danh sach
    for(i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", i + 1);

        printf("Nhap id: ");
        scanf("%d", &sv[i].id);

        printf("Nhap ten: ");
        scanf(" %[^\n]", sv[i].name);

        printf("Nhap diem: ");
        scanf("%f", &sv[i].grade);
    }

    // In ra
    printf("\nDanh sach:\n");
    for(i = 0; i < n; i++) {
        printf("%d - %s - %.2f\n",
               sv[i].id,
               sv[i].name,
               sv[i].grade);
    }

    return 0;
}