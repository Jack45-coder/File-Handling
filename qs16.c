/*
 3. Append Data to a File
 Task: Add new data to an existing file without overwriting the previous content.
 Explanation :
 ● Openthefilein append (a) mode. This mode ensures new data is added to
 the end of the file without erasing existing content.
 ● Prompttheuser to provide the data they wish to append.
 ● Usefprintf() or fputs() to append the data.
 ● After appending, close the file. If the file does not exist, it is created.
 Input:
 Enter the file name to append: example.txt
 Enter the text to append: This is appended text.
 Output:
 Data appended successfully.
*/

#include <stdio.h>
int main()
{

  char fileName[30];
  char text[250];

  printf("Enter the filename to append: ");
  scanf("%s", fileName);

  FILE *file = fopen(fileName, "a");
  if (file == NULL)
  {
    printf("Error! could not exist file.\n");
    return 1;
  }

  printf("Enter the text to append: ");
  getchar();
  fgets(text, sizeof(text), stdin);

  fputs(text,file);

  printf("Successfully apended text.\n");
  fclose(file);
  return 0;
}