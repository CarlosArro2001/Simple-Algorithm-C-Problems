/*
Aim : Write a C program to check which number nearest to the value 100 among two given integers.
      Return 0 if the two numbers are equal.

Author  : Carlos Raniel Ariate Arro
Date  : 23-09-2019
*/

//preproccessors used.
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

// declared variables.
  int num1 , num2;
  int diff1 , diff2;
  int targetVal = 100;
  time_t t;

//  main function

  int main(){

    //this initializes the random number generator
    srand((unsigned) time(&t));

    num1 = rand()%100;
    num2 = rand()%100;

    //the greater the difference the further away it is from 100 vice versa
    diff1 = 100 - num1;
    diff2 = 100 - num2;

    if(diff1 > diff2){
      printf(" %d is the closest to 100 with the difference of %d" , num2 , diff2);
      return 0;
    }else if(diff1 == diff2){
      printf("Equal difference with , %d" , diff1);
      return 0;
    }else{
      printf(" %d is the closest to 100 with the difference of %d" , num1 , diff1);
      return 0;
    }
  }
