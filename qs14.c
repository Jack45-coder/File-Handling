/*
 1. Create and Write to a File
 Task: Write a program to create a file and write a user-provided string into it.
 Explanation:
 ● Theprogramshould open a file in write (w) mode.
 ● Ifthe file doesn’t exist, it will be created automatically. If it exists, its content
 will be erased.
 ● Theuserprovides a string that is written to the file using the fprintf() or
 fputs() function.
 ● After writing, the file is closed using fclose().
 Input:
 Enter the file name: example.txt
 Enter the text to write: Hello, File Handling in C!
 Output:
 File written successfully.
*/

#include <stdio.h>
int main()
{

  char fileName[20];
  char text[100];

  printf("Enter filename: ");
  scanf("%s", fileName);

  printf("Enter the text to write: ");
  getchar();

  fgets(text, sizeof(text),stdin);

  FILE *file = fopen(fileName,"w");
  if(file == NULL){
    printf("Error! could not create or open file.\n");
    return 1;
  }

  fprintf(file,"%s",text);

  fclose(file);

  printf("File Written successfully.\n");
  return 0;
}