/*
Aim :   Write a C program that accept two integers and return true if either one is 5 or their sum or difference is 5.

Author :  Carlos Raniel Ariate Arro
Date  :   27-09-2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num[1];
int i;
int diff ;
time_t t;

int main(){
  srand((unsigned) time(&t));
  for(i = 0 ; i<=1;i++){
    num[i] = rand() % 10;
  }
  if (num[1] > num[0]){
    diff = num[1] - num[0];
  }
  if (num[0] > num[1]) {
    diff = num[0] - num[1];
  }
  if (num[1] == num[0]) {
    diff = 0;
  }

  if(num[1] == 5 || num[0] == 5 || diff == 5 )
    printf("\n True");
}
