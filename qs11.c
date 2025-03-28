/*
 Q3. Program to merge the contents of two files into a third file.
 Input:
 file1.txt:
Hello from file 1.
 file2.txt:
Hello from file 2.
 Expected Output:
 A file named
merged.txt with the content:
 Hello from file 1.
 Hello from file 2.
*/

#include <stdio.h>
int main()
{

  FILE *file1 = fopen("input.txt", "r");

  if (file1 == NULL)
  {
    printf("Error Could not open file 1.\n");
    return 1;
  }

  FILE *file2 = fopen("write.txt", "r");
  if (file2 == NULL)
  {
    printf("Error Could not open file 2.\n");
    return 1;
  }

  FILE *merge = fopen("merged.txt", "w");
  if (merge == NULL)
  {
    printf("Error! could not open merged file.\n");
    fclose(file1);
    fclose(file2);
    return 1;
  }

  char ch;
  while ((ch = fgetc(file1)) != EOF)
  {
    fputc(ch, merge);
  }

  while ((ch = fgetc(file2)) != EOF)
  {
    fputc(ch, merge);
  }

  fclose(file1);
  fclose(file2);
  fclose(merge);

  printf("Files merged successfully into merged.txt.\n");

  return 0;
}