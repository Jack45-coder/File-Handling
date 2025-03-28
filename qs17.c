/*
 4. Count Characters, Words, and Lines in a File
 Task: Count and display the number of characters, words, and lines in a file.
 Explanation:
 ● Openthefilein read mode.
 ● Readthefilecharacter by character using fgetc().
 ● Count:
 ○ Characters: Increment the count for every character read (excluding
 EOF).
 ○ Words: Increment the count when a space or newline is encountered.
 ○ Lines: Increment the count when a newline (\\n) is encountered.
 ● Display the counts.
 Input:
 Enter the file name: example.txt
 Output:
 Characters: 50
 Words: 8
 Lines: 2
*/

#include <stdio.h>
#include<string.h>
int main()
{

  char fileName[25];

  printf("Enter file Name: ");
  scanf("%s", fileName);

  FILE *file = fopen(fileName, "r");
  if (file == NULL)
  {
    printf("Error ! could not open file.\n");
    return 1;
  }
  char ch;
  // char str[100];
  // fgets(str,sizeof(str),stdin);
  int character = 0, words = 1, lines = 1, inword = 0;
  while(ch = fgetc(file) != EOF){
    character++;
    if(ch == ' '){
      words++;
    }
    if(ch == '\n'){
      lines++;
    }
  }


  printf("Character: %d\n", character);
  printf("Words    : %d\n", words);
  printf("Lines    : %d\n", lines);

  fclose(file);

  return 0;
}