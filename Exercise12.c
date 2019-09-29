/*

Aim : Write a C program to check whether two given integers are in the range 40 - 50 inclusive,
      or they are both in range 50 - 60 inclusive.

Author : Carlos Raniel Ariate Arro
Date  : 24-09-2019


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int num[3];
int i ;
time_t t;

int main(){
  srand((unsigned) time(&t));

    for( i = 0 ; i <= 2 ; i++ ){
      num[i] = rand() % 59;
      if(num[i]> 50 && num[i] <60){
        printf("\n %d is between 50 - 60 ", num[i]);
      }
      if(num[i]>40 && num[i]<50){
        printf("\n %d is between 40 - 50",num[i]);
      }
    }
    if( (num[0]> 40 && num[0] <50) && (num[1]> 40 && num[i] <50)){
      printf("\nBoth are in the range 40 - 50");
      return 1;
    }else if( (num[0]> 50 && num[0] <60) && (num[1]> 50 && num[i] <60)){
      printf("\nBoth are in the range 50 - 60");
      return 1;
    }else{
      printf("\nThey are both in different ranges");
      return 0;
    }

}
