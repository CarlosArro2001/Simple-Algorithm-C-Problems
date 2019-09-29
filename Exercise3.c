/*
        Documentation Section

Aim     : Write a C program to check a given integer and return true if it is within 10 of 100 or 200.

Author  :
Aim     :
*/

//      Link Section
#include <stdio.h>
#include <stdlib.h>

//      Declaration Section
  int x;


//      Execution Section
int main(){
  printf("Please enter a number: \n");
  scanf("%d",&x);
  if(abs(x - 100) <= 10 || abs(x - 200) <= 10){
    return 1;
  }else{
    return 0;
  }

}
