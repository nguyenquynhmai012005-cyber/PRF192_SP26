//In ra gia tri max trong 3 so thuc a,b,c

#include<stdio.h>
int main(){
	float a,b,c;
	printf("Nhap a,b,c:");
	scanf("%f %f %f", &a, &b, &c);
	float max;
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	printf("gia tri lon nhat la: %.2f", max);
	return 0;

}