/*
 Q1. Program to read a file line by line using
Input:
 A file named
input.txt with the content:
 This is line 1.
 This is line 2.
 Expected Output:
 This is line 1.
 This is line 2
*/

#include<stdio.h>
int main(){

  FILE *file = fopen("input.txt","r");
  if(file == NULL){
    printf("Error! could not open file.\n");
    return 1;
  }

  char str[50];

while(fgets(str,sizeof(str),file) != NULL){
  printf("%s",str);
}






  return 0;
}