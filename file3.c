#include <stdio.h>
#include <string.h>
struct student
{
  char name[20];
  int id;
  float m;
} st;

int main()
{

  FILE *file = fopen("input.txt", "a");
  strcpy(st.name, "abhi");
  st.id = 1;
  st.m = 22;

  printf("%s %d %.2f", st.name, st.id, st.m);

  return 0;
}