#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void v(void)

{
  char str [520];
  
  fgets(str, 512,stdin);
  printf(str);
  if (eax == 64) {
    fwrite("Wait what?!\n",1,12,stdout);
    system("/bin/sh");
  }
  return;
}



void main(void)

{
  v();
  return;
}