/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float Sub1marks, Sub2marks;
  float sum, Average;

  printf("Enter the Sub1marks:");
  scanf("%f", &Sub1marks);

  printf("Enter the Sub2Marks:");
  scanf("%f", &Sub2marks);

  sum= Sub1marks + Sub2marks;
  Average= sum/2;

  printf("Average of the two subjects:%.2f", Average);
  
  return 0;
}


