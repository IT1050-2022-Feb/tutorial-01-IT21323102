/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int no1,no2; //intiating the program
  int sum;
  float avg;

  printf("Enter the result of the first subject:");
  scanf("%d",&no1);

  printf("Enter the result of the second subject:");
  scanf("%d",&no2);

  sum = no1 + no2;        //calculating the sum
  printf("The sum is %d\n",sum);

  avg = (sum/2);    //calculating the average
  printf("The average is %.2f\n",avg);


  return 0;
}

