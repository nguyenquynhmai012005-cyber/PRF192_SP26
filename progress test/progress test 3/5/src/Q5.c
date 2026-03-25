#include <stdio.h>

// Hàm tìm hiệu giữa max và min
int findDifference(int a[], int n) {
    int max = a[0];
    int min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }

    return max - min;
}
int main() {
    int n;
    printf("INPUT:\n");
    scanf("%d", &n);
    int a[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int result = findDifference(a, n);
    printf("\nOUTPUT:\n");
    printf("%d", result);

    return 0;
}