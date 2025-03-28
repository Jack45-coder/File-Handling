/*
Q1. How to create a file in C?
 Objective Understand how to create a file in C and write to it using
Explanation To create a file in C, you use the
fopen() .
 fopen() function with the mode
"w" (write). If the file does not exist, it will be created.
*/

#include<stdio.h>
int main(){

FILE *file = fopen("write.txt","w");

fputc('c',file);



  return 0;
}