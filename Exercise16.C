/*
Aim : Write a C program to count the number of two 5's are next to each other in an array of integers.
      Also count the situation where the second 5 is actually a 6.

Author  : Carlos Raniel Ariate Arro
Date  : 27-09-2019
*/

#include <stdio.h>
#include <stdlib.h>

int num[10] = {5,5,3,4,5,5,6,5,5,9};
int i ;
int x ;

int main(){
  for(i = 0 ; i<= 9 ; i++){
    if(num[i] == 5 && num[i+1] == 5 ){
      x += 1 ;
      continue;
      }
    }
    printf("There are %d pairs of 5's next to each other", x);
  }
