/*
  Documentation Section

Aim : Write a C program to compute the sum of two given integer values.
      If the two values are the same , then return triple their sum.

Author  : Carlos Raniel Ariate Arro
Date    : 18-09-2019
*/

//  Link Section
#include <stdio.h>

// Declaration Section
int input1 , input2 , result;

//  Execution Section
int main(){
  printf("Please enter two numbers : \n");
  scanf("%d %d" , &input1 , &input2);

//checking whether the two values are equal or not.
  if( input1 == input2){
    result = (input1 + input2)*3;
  }else{
    result = input1 + input2;
  }

//outputting
  printf("%d",result);
  return 0 ;
}
