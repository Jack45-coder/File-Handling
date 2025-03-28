/*
 Q2. Program to copy the contents of one text file to another.
 Input:
 A file named
input.txt with the content:
 Copy this content.
 Expected Output:
 A file named
output.txt with the content:
 Copy this content.
*/

#include <stdio.h>
int main()
{

  FILE *source = fopen("input.txt", "r");
  char ch;

  if (source == NULL)
  {
    printf("Error! could not open source file.\n");
    return 1;
  }

  FILE *destination = fopen("output.txt", "w");
  if (destination == NULL)
  {
    printf("Error! Could not open destination file.\n");
    fclose(source);
    return 1;
  }

  while ((ch = fgetc(source)) != EOF)
  {
    fputc(ch, destination);
  }

  printf("File copied successfully!\n");

  fclose(source);
  fclose(destination);

  return 0;
}