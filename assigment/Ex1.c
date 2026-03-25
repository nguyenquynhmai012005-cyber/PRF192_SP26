//1. Tao file text "baitap1.txt", ghi 1 so vao file nay.
#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("baitap1.txt", "w");

    // Kiem tra thanh cong
    if(fp == NULL){
        printf("Error!");
        return 0;
    }
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    fprintf(fp, "Gia tri n: %d", n);

    // dong file
    fclose(fp);
   //DOC FILE
    fp = fopen("baitap1.txt", "r");

    if (fp == NULL) {
        printf("Khong mo duoc file!");
        return 0;
    }

    char ch;
    printf("\nNoi dung file:\n");

    // Đọc từng ký tự và in ra màn hình
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
   