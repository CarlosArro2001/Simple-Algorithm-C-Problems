/*
Aim : Write a C program to to test if a given non-negative number is a multiple of 13 or it is one more than a multiple of 13.

Author  : Carlos Raniel Ariate Arro
Date  : 28-09-2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

time_t t;
int num;

int main(){
  srand((unsigned) time(&t));

  num =rand()% 101;

  if( num % 13 == 0 ){
    printf("\n True ");
    return 1;
  }else{
    printf("\n False ");
  }
}
