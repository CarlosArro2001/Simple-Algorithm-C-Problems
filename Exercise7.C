/*
        Documentation Section

Aim:    Write a C program to check four given integrs whether they in the range
        100 -- 200 inclusive

Author :  Carlos Raniel Ariate Arro
Date  :   20-09-2019

*/

//  Link Section
  #include <stdio.h>
  #include <stdlib.h>

//  Declaration section.

  int numbers[4]  = {150 , 130 , 250 , 1};
  int i ;

//  Execution section.

  int main(){
    for(i=0; i < 4;i++){
      if(numbers[i]>= 100 && numbers[i] <= 200){
        printf("\n%d is true" , numbers[i]);
      }else{
        printf("\n%d is false" , numbers[i]);
      }
}
  }
