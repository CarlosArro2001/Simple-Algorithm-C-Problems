/*

Aim : Write a C program to check whether three given integer values are
      in the range 20 - 50 inclusive. Return true if 1 or other is in the
      said range , otherwise false.

Author  : Carlos Raniel Ariate Arro
Date  : 23-09-2019

*/

//  preproccessors being used
    #include <stdio.h>
    #include <stdlib.h>

//  declared variables
    int num[2]  = {33,22,59}; //rather than storing them into seperate I put it in an array since they're all the same data type.

int main(){
    if( (num[0] >= 20 && num[0] <= 50 ) || (num[1] >= 20 && num[1]<=50) || (num[2] >= 20 && num[2] <= 50 ) ){
      printf("\n TRUE ");
      return 1;
    }else{
      printf("\n FALSE");
      return 0;
    }
}
