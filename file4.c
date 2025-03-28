
#include <stdio.h>
int main()
{

  FILE *file = fopen("text.bin", "rb");
  char str[25];

  fwrite(str, sizeof(str), 1, file);


  fread(str, sizeof(str), 1, file);

  puts(str);
  return 0;
}