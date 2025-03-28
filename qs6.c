/*
Q3. Program to count the number of characters, words, and lines in a text file.
 Objective Create a program that counts and displays the number of characters,
words, and lines in a file.
 Input:
 A file named
input.txt with the content:
 This is a test file.
 It contains some text.
 Expected Output:
 Characters: 38
 Words: 7
 Lines: 2
*/

#include <stdio.h>
// #include <stdlib.h>
int main()
{
  char ch;
  int c = 0, w = 0, l = 0, inword = 0;

  FILE *file = fopen("input.txt", "r");
  if (file == NULL)
  {
    printf("Error! could not open file.\n");
    return 1;
  }

  while ((ch = fgetc(file)) != EOF)
  {
    c++;
    if (ch == '\n')
    {
      l++;
    }
    if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r')
    {
      inword = 0;
    }
    else if (!inword)
    {
      inword = 1;
      w++;
    }
  }

  if (c > 0 && ch != '\n'){
  l++;
  }

  fclose(file);
  printf("===========================\n");
  printf("    File Statistics\n");
  printf("===========================\n");
  printf("Characters- %d\n", c);
  printf("Lines-      %d\n", l);
  printf("Words-      %d\n", w);
  printf("===========================\n");
  return 0;
}