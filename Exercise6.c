/*
        Documentation Section

Aim     : Write a C program to check if one given temperatures is less
          than 0 and the other is greater than 100.

Author  : Carlos Raniel Ariate Arro
Date    : 20-09-2019
notes   :


*/


#include <stdio.h>
#include <stdlib.h>
int main(void){
    printf("%d",test(120, -1));
    printf("\n%d",test(-1, 120));
    printf("\n%d",test(2, 120));
    }
   int test(int temp1, int temp2)
        {
             return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
        }
