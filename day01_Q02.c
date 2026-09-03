//Write a program to input two numbers and display their sum, difference, product, and quotient
#include <stdio.h>
int main(){
float A,B;
 printf("Enter the value of A: ");
 scanf("%f",&A);
 printf("Enter the value of B: ");
 scanf("%f",&B);
 float sum,difference,product;
 float quotient;
 sum=A+B;
 if (A>B){
 difference=A-B;}
 else {
 difference=B-A;}

 product=A*B;
 quotient=(float)A/B;
 printf("Sum: %f\n", sum);
 printf("Difference: %f\n", difference);
 printf("Product: %f\n", product);
 printf("Quotient: %f\n", quotient);
 
}
