#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void p(void)
{
  uint unaff_retaddr;
  char str [76];
  
  fflush(stdout);
  gets(str);
  if ((unaff_retaddr & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n",unaff_retaddr);
    exit(1);
  }
  puts(str);
  strdup(str);
  return;
}



void main(void)

{
  p();
  return;
}