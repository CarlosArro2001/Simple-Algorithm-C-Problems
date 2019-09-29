/*
      Documentation Section

Aim : Write a C program to check two integers and return true if
      one of the numbers is 30 or if their sum is 30.

Author  : Carlos Raniel Ariate Arro
Date  : 19-09-2019
*/


//  Link Section

  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
// Declaration Section
  int i , n ;
  int sum;
  time_t t ;

//Execution section

int main(){
  //this initializes the random number generator
  srand((unsigned) time(&t));

  i = rand() % 31 ;
  n = rand() % 31 ;
  sum = i + n;
  if((i == 30)||(n == 30 )||(sum == 30)){
    printf("\n True");
  }else{
    printf("\n False");
  }

}
