

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct students
{
  int ID;
  char name[25];
  float marks;
};

void inputsDetails()
{
  FILE *file = fopen("write.txt","w");
  struct students *s;
  printf("Enter your ID: ");
  scanf("%d", &s->ID);

  printf("Enter your name: ");
  fgets(s->name, 25, stdin);
  getchar();
  strtok(s->name,"\n");

  printf("Enter your marks: ");
  scanf("%f",s->marks);

  fclose(file);

  // return *s;
}

int main(){

inputsDetails();

  return 0;
}