/*
Aim : Write a C program to compute the sum of the two given integers.
      If the sum is in the range 10 - 20.

Author  : Carlos Raniel Ariate Arro
Date  : 27-09-2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num[1];
int i ;
int sum;
time_t t;

int main(){

  srand((unsigned) time(&t));

  for(i = 0 ; i<=1 ; i++){
    num[i] = rand()% 21;
  }
  sum = num[0] + num[1];
  if(sum >= 10 && sum <= 20){
    printf("\nTrue");
    return 1;
  }
}
