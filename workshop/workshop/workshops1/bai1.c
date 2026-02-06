//Nhập vào biến x nguyên
//Tính |x| 
//Tinh sqrt(x)
#include <stdio.h>
#include <math.h>
int main() {
	int x;
	printf("nhap x:");
	scanf("%d",&x);
	int preX = x;
	if (x < 0) {
		x = -x;
		printf ("|%d| = %d",preX,x);
		printf("\nCan bac 2 = %.2f",sqrt(x));
		return 0;
	}
}
