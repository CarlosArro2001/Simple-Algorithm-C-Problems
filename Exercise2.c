/*
      Documentation Section

Aim   : Write a C program to get the abosulte difference between n and 51.
        If n is greater than 51 return triple the absolute difference.

Author  :  Carlos Raniel Ariate Arro
Date  : 18-09-2019

*/

//  Link Section
  #include <stdio.h>

//  Declaration
  int n;
  const int num = 51;
  int diff;
//  Execution

int main(){
  printf("Please enter a number : \n ");
  scanf("%d", &n);
  if (n > num)
  {
      diff =  (n - num)*3;
  }
  diff = n - num;
  printf("\n The difference is %d ", diff);
}
