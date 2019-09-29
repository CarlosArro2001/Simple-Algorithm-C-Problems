/*
      Documentation Section.

Aim   :   Write a C program to check whetehr three given integers are in the range 20 - 50 inclusive.
          Return true if 1 or more of them are in the said range.

Author : Carlos Raniel Ariate Arro.
Date   : 22-09-2019

*/


//    Link section.

      #include <stdio.h>
      #include <stdlib.h>


//    Declaration section.
      int integers[2] = { 22 , 33 , 55 };

//    Execution section.

      int main(){

        //checking if 1 or more of them are in the said range.
        if( (integers[0] >= 20 && integers[0] <= 50) ||
            (integers[1] >= 20 && integers[1] <= 50) ||
            (integers[2] >= 20 && integers[2] <= 50) ){
          printf("\n True");
        }
      }
