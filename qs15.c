/*
 2. Read Data from a File
 Task: Read and display the content of a file.
 Explanation :
 ● Theprogramopens the file in read (r) mode. If the file does not exist, the
 program should handle the error gracefully.
 ● Thecontent of the file is read using the fgets() function or fscanf() function,
 line by line or word by word.
 ● Theprogramdisplays the content to the console.
 ● After reading, the file is closed to release resources.
 Input:
 Enter the file name to read: example.txt
 Output:
 Contents of the file:
 Hello, File Handling in C!
*/

#include <stdio.h>
int main()
{
  char fileName[30];
  char line[100];

  printf("Enter filename: ");
  scanf("%s", fileName);

  FILE *file = fopen(fileName, "r");
  if (file == NULL)
  {
    printf("Error! could not create or open file.\n");
    return 1;
  }

  printf("\nContents of the file:\n");
  while (fgets(line, sizeof(line), file) != NULL)
  {
    printf("%s", line);
  }

  fclose(file);
  return 0;
}