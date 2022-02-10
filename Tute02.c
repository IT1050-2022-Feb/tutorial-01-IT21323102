/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  
  int d1,d2;
  int amount,remaining_amount;

  printf("Enter the distance:");
  scanf("%d",&d1);

  printf("Enter the remaining distance:");
  scanf("%d",&d2);

  amount = (d1 * 50);
  printf("The amount for first 30km is %d\n",amount);

  remaining_amount = (30*d2) + ((50-30) * 40);
  printf("the remaining amount is %d\n",remaining_amount);
  
  
  
  return 0;
}
