#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void o(void)

{
  system("/bin/sh");
  exit(1);
}



void n(void)

{
  char str [520];
  
  fgets(str,512,stdin);
  printf(str);
  exit(1);
}



void main(void)

{
  n();
  return;
}