/*
Aim : Write a C program to check if a given non-negative given number is a multiple of 3 or 7, but not both

Author  : Carlos Raniel Ariate Arro
Date  : 28-09-2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num;
time_t t;

int main(){
  srand((unsigned) time(&t));

  num = rand() % 101;
  if( num % 7 == 0|| num % 3 == 0 ){
    printf(" \n True at the number %d ", num);
  }else if( num % 7 == 0 && num % 3 == 0 ){
    printf(" \n False at the number %d ", num);
  }else{
    printf(" \n False at the number %d ", num );
  }
}
