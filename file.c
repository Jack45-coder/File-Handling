#include <stdio.h>
#include <string.h>
int main()
{

  FILE *file = fopen("1st.txt", "r");
  char str[100];
  fgets(str, sizeof(str), file);

  puts(str);
  return 0;
}