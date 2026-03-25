#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 int n;
    scanf("%d", &n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int sum = 0;
    n = abs(n); // bỏ dấu âm

    while(n > 0){
        sum += n % 10; // lấy chữ số cuối
        n /= 10;       // bỏ chữ số cuối
    }

    printf("%d", sum); 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}