/*
 Q2. Program to read the contents of a text file and display them on the console.
 Objective Read and display file content from
input.txt .
 Input:
 A file named
input.txt with the content:
 This is a test file.
 It contains some text.
 Expected Output:
 This is a test file.
 It contains some text.
*/

#include<stdio.h>
int main(){

FILE *file = fopen("input.txt","r");
if(file == NULL){
  printf("Error! could not open file>\n");
  return 1;
}

char ch;
while((ch = fgetc(file)) != EOF){
  putchar(ch);
}


fclose(file);


  return 0;
}