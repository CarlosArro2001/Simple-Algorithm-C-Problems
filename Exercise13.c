/*
Aim : Write A program to check if two given non-negative integers have the same last digit.

Author :  Carlos Raniel Ariate Arro
Date  : 25-09-2019
*/

//  preprocessors
#include <stdio.h>
#include <stdlib.h>

int input1 , input2;

int main(){

  printf("\n Please enter a two digit number : ");
  scanf("%d", &input1);
  printf("\n Please enter a two digit number : ");
  scanf("%d", &input2);

  if(input1%10 == input2%10){
    printf("%d and %d are equal" , input1 , input2);
  }else{
    printf("%d and %d are not equal" , input1 , input2);
  }
}
