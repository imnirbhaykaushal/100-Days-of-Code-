//Write a program to input two numbers and display their sum//
#include <stdio.h>
int main(){
    int A,B;
    printf("Enter a value of A: ");
    scanf("%d",&A);
    printf("\nEnter a value of B: ");
    scanf("%d",&B);
    int sum;
    sum= A+B;
    printf("The sum of %d and %d is %d",A,B,sum);
       return 0;

}