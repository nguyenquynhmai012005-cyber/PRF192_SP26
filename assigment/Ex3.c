#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    float grade;
};

int main() {
    struct SinhVien sv;
    FILE *f;

    // Nhap thong tin
    printf("Nhap id: ");
    scanf("%d", &sv.id);

    printf("Nhap ten: ");
    scanf(" %[^\n]", sv.name);

    printf("Nhap diem: ");
    scanf("%f", &sv.grade);

    // Ghi file
    f = fopen("baitap3.txt", "w");

    fprintf(f, "%d\n", sv.id);
    fprintf(f, "%s\n", sv.name);
    fprintf(f, "%f\n", sv.grade);

    fclose(f);

    // Doc file
    struct SinhVien sv2;
    f = fopen("baitap3.txt", "r");

    fscanf(f, "%d\n", &sv2.id);
    fscanf(f, "%[^\n]\n", sv2.name);
    fscanf(f, "%f", &sv2.grade);

    fclose(f);

    // In ra man hinh
    printf("\nThong tin:\n");
    printf("%d\n", sv2.id);
    printf("%s\n", sv2.name);
    printf("%.2f\n", sv2.grade);

    return 0;
}