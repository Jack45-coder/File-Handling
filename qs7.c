/*

*/

#include<stdio.h>
#include<string.h>
int main(){

FILE *file = fopen("input.txt","r");
if(file == NULL){
  printf("Faild! could not open file\n");
  return 1;
}

char str[50];
fgets(str,50,file);
puts(str);

fclose(file);

file = fopen("Copy.txt","w");

// char str2[50] = file;
int len = strlen(str);

for(int i = len-1; i >= 0; i--){
  printf("%c",str[i]);

  fputc(str[i],file);
}

fclose(file);
printf("\nReversed string has been written to copy.txt.\n");
  return 0;
}