//Tính cước taxi chuyên nghiệp Viết chương trình tính tiền taxi với quy định:
//Giá mở cửa: 12.000đ cho 0.5km đầu tiên.
//Từ 0.5km đến 30km: 15.000đ/km.
//Từ km thứ 31 trở đi: 12.000đ/km.
//Nếu thời gian chờ trên 5 phút, mỗi phút tiếp theo tính 1.000đ/phú

#include <stdio.h>
int main() {
	float km;
	int chờ;
	int tiền = 0;
	printf("Nhập số km đã đi:");
	scanf("%f", &km);
	printf("Nhập số phut đã chờ:");
	sacnf("%d", &chờ);
	 if (km <= 0.5) 
        tiền = 12000;
    
    else (0.5<km<=30) 
        tiền  = 12000 + (km - 0.5) * 15000;
	 else 
        tiền = 12000 + 29.5 * 15000 + (km - 30) * 12000;
    
    if (chờ > 5) 
        tiền  = tiền + (chờ - 5) * 1000;
    
    printf("Tong tien taxi phai tra: %d VND", tiền);
    return 0;
}