/*
Q2. Program to create a new text file and write "Coding Age" into
it.
 Objective Write a program that creates a text file and writes the string "Coding
Age" to it.
 Expected Output:
 Coding Age
 Instructions:
 Open a file named
newfile.txt in write mode (
 Write "Coding Age" into the file.
 "w" ).
  Print "Coding Age" to the console after successfully writing to the file.
*/

#include <stdio.h>

int main()
{
  FILE *file = fopen("newFile.txt", "w");

  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
}

fprintf(file,"coding age");
fclose(file);

file = fopen("newFile.txt","r");
if(file == NULL){
  printf("Error opening file for reading!\n");
  return 1;
}

  char str[50];
  fgets(str,sizeof(str),file);

  puts(str);

  fclose(file);

  return 0;
}