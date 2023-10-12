#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void n(void)

{
  system("/bin/cat /home/user/level7/.pass");
  return;
}

void m(void)

{
  puts("Nope");
  return;
}



void main(int ac, char *av[])

{
  char *dest;
void (*func)(void);
  
  dest = (char *)malloc(64);
  func = malloc(4);
  func = &m;
  strcpy(dest, av[1]);
  (func)();
  return;
}
