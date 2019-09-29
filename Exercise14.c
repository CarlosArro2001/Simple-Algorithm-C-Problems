/*
Aim : Write a C program to check whether the sequence of numbers
      1 , 2 , 3 appears in a given array of integers somewhere.

Author  : Carlos Raniel Ariate Arro.
Date  : 25-09-2019.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num[2];
int i ;
time_t t;

int main(){
  srand((unsigned) time(&t));

  while(num[0] != 1 && num[1] != 2 && num[2] != 3){
    num[1] = rand() % 4 ;
    printf("%d", num[0]);
    num[2] = rand() % 4 ;
    printf("%d", num[1]);
    num[3] = rand() % 4 ;
    printf("%d", num[2]);
  }
}
