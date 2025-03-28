//apend mode:

#include<stdio.h>
int main(){
FILE *file = fopen("data.txt","a");

char str[50] = "coding___";
fputs(str,file);

file = fopen("data.txt","w");

char str1[50] = "Age";
fputs(str1,file);

fclose(file);
  return 0;
}