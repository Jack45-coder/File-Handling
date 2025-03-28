/*
 Q4. Program to append text "C is fun!" to an existing file without overwriting its
content.
 Objective Learn to append content to an existing file.
 Input:
 A file named
output.txt with the content:
 Coding Age
 Expected Output:
 After running the program, the content of
output.txt will be:
 Coding Age
 C is fun!
*/

#include <stdio.h>
int main()
{

  FILE *file = fopen("output.txt", "a");
  printf("\n");

  if (file == NULL)
  {
    printf("Error! Could not open file.\n");
    return 1;
  }

  // char str[50] = "Coding";
  fputs("C is fun!\n",file);

  fclose(file);
  printf("Succesfully writen to file!\n");

  return 0;
}