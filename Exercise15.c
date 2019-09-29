/*
Aim : Write a C program to check if a triple is present in an array of integers or not.
      If a value appears three times in a row in an array is its called a triple.

Author :   Carlos Raniel Ariate Arro
Date  : 27-09-2019
*/

#include <stdio.h>
#include <stdlib.h>

int num[10] = {4,1,3,4,5,8,8,8,9,1};
int i;

int main(){
  for(i = 0 ; i <= 9 ; i++){
    if(num[i] == num[i+1] && num[i] == num[i+2]){
      printf("%d is a triple in the array " , num[i]);
    }else{
      continue;
    }
  }
}
