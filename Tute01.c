/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int num1,num2,cal;
  float avg;

  printf(" Enter the first number : ");
  scanf("%d",&num1); // Get the number 1 input
  
  printf("\n Enter the second number : ");
  scanf("%d",&num2); // Get the number 2 input

  cal = (num1 + num2); // calculate the two numbers

  avg = (cal / 2); //calculate the average of two numbers

  printf("\n Average of two marks : %.2f",avg);

  return 0;
}

