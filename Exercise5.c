/*
    Documentation Section

Aim : Write a C program to check if a given positive number is a multiple of 3 or a multiple of 7.

Author : Carlos Raniel Ariate Arro
Date  : 20-09-2019

notes:  - I added a for loop to make sure that two outcomes are working properly
          whether the values is returning true or not.


*/


//Link section
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

//Declaration Section


  int i,z;
  time_t t;

//Execution Section

  int main(){

    //initializes the random number generator.
    srand((unsigned)  time(&t));


    for(z=0 ; z<= 10 ; z++){
    //generates a random number for the variable i.
    i = rand()  % 101 ;

    if((i%3 == 0)||(i%7==0)){
      printf("\n  %d true", i);
    }else{
      printf("\n %d false",i);
    }
}



  }
