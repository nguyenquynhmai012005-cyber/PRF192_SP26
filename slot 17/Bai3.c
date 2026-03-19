#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
    int id;
    char name[50];
    float price;
} Book;

int main() {
    system("cls");
    printf("INPUT:\n");

    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n, i;
    scanf("%d", &n);
    Book b[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i].id);
        scanf(" %[^\n]", b[i].name);
        scanf("%f", &b[i].price);
    }

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");

    //@STUDENT: WRITE YOUR OUTPUT HERE:
    float max = b[0].price;
    int maxIndex = 0;
    for (i = 1; i < n; i++) {
        if (b[i].price > max) {
            max = b[i].price;
            maxIndex = i;
        }
    }
    printf("Max price: %.2f\n", max);
    printf("Book name: %s\n", b[maxIndex].name);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}