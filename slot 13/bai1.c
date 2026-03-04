#include <stdio.h>

void doubleX(int x){
    x = x + x;
}
void doubleX2(int *p){
    *p = *p + *p;
}
void inputArr(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void outputArr(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
int isPrime(int n){
    int i;

    if(n < 2)
        return 0;

    for(i = 2; i <= n/2; i++){
        if(n % i == 0)
            return 0;
    }

    return 1;
}
int countPrimes(int a[], int n){
    int i, count = 0;

    for(i = 0; i < n; i++){
        if(isPrime(a[i]))
            count++;
    }

    return count;
}

int main(){
    int x = 10;
    int a[100];
    int n;
    doubleX(x);
    printf("Gia tri x sau doubleX: %d\n", x);
    doubleX2(&x);
    printf("Gia tri x sau doubleX2: %d\n", x);
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    inputArr(a, n);

    printf("Mang vua nhap: ");
    outputArr(a, n);

    printf("\nSo luong so nguyen to: %d", countPrimes(a, n));

    return 0;
}