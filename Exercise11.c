/*
Aim : Write a C program to check whether two given integers are in the range 40 - 50 inclusive,
      or they are both in the range 50 - 60 inclusive.

Author  : Carlos Raniel Ariate Arro
Date  : 23-09-2019
*/

// Preproccessors being used
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

// variables declared
  int num[1];
  int i;
  time_t t;


  int main(){
    srand((unsigned) time(&t));
      for(i = 0 ; i <= 1 ; i++){
        num[i] = rand()% 60;
        if(num[i] >= 40 && num[i] <= 50){
          printf("\n Between 40 - 50 with the number %d" , num[i]);
        }else if(num[i] >= 50 && num[i] <= 60){
          printf("\n Between 50 - 60 with the number %d" , num[i]);
        }else{
          printf("Error");
          continue;
        }
      }
  }
