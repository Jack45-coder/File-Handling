/*
 Q1. Program to create a new text file named
output.txt and write the string "Coding
Age" into it.
 Objective Create a new file and write a string to it.
 Expected Output:
 The program should display the message "Coding Age" on the console after
 successfully writing to the file.
 Instructions:
 Create and write to the
output.txt file.
 Display "Coding Age" on the console after successfully writing the content.
*/

#include<stdio.h>
int main(){

FILE *file = fopen("output.txt","w");
if(file == NULL){
  printf("Error! could not open file\n");
  return 1;
}

fprintf(file,"coding age");
fclose(file);

printf("coding age\n");



  return 0;
}